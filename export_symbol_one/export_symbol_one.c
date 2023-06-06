/*
 * @Author: zy nscc ubuntu22.04 1920548152@qq.com
 * @Date: 2023-06-06 11:04:29
 * @LastEditors: zy nscc ubuntu22.04 1920548152@qq.com
 * @LastEditTime: 2023-06-06 16:26:35
 * @FilePath: /export_symbol/export_symbol_one.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>

int function_one(void)
{
    printk("EXPORT_SYMBOL In Func: %s...\n", __func__);
    return 0;
}

EXPORT_SYMBOL(function_one);    // 在模块函数定义之后使用EXPORT_SYMBOL(函数名)来声明

static int __init export_symbol_init(void)
{
    printk("EXPORT_SYMBOL Module one, Init!\n");
    return 0;
}

static void __exit export_symbol_exit(void)
{
    printk("EXPORT_SYMBOL Module one, Exit!\n");
}

module_init(export_symbol_init);
module_exit(export_symbol_exit);


MODULE_LICENSE("GPL");