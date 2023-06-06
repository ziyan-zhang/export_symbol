/*
 * @Author: zy nscc ubuntu22.04 1920548152@qq.com
 * @Date: 2023-06-06 11:32:47
 * @LastEditors: zy nscc ubuntu22.04 1920548152@qq.com
 * @LastEditTime: 2023-06-06 16:45:07
 * @FilePath: /export_symbol/export_symbol_two/export_symbol_two.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/module.h>

extern int function_one(void);    // 在模块函数使用之前使用extern来声明


static int function_two(void) 
{
    // extern int function_one(void);    // 在模块函数使用之前使用extern来声明
    function_one();
    printk("EXPORT_SYMBOL In Func: %s...\n", __func__);
    return 0;
}

static int __init export_symbol_init(void)
{
    printk("EXPORT_SYMBOL Module two, Init!\n");
    function_two();
    return 0;
}

static void __exit export_symbol_exit(void)
{
    printk("EXPORT_SYMBOL Module two, Exit!\n");
}

module_init(export_symbol_init);
module_exit(export_symbol_exit);

MODULE_LICENSE("GPL");
