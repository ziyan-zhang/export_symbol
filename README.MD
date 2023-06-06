<!--
 * @Author: zy nscc ubuntu22.04 1920548152@qq.com
 * @Date: 2023-06-06 21:09:13
 * @LastEditors: zy nscc ubuntu22.04 1920548152@qq.com
 * @LastEditTime: 2023-06-06 22:07:04
 * @FilePath: /export_symbol/README.MD
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
-->

运行：
```bash
./run.sh
```
B模块引用A模块中的函数C，需要三点：
1. A模块中把C函数EXPORT_SYMBOL(C)出来
2. B模块make的时候指定引用A模块中的符号
3. B模块中声明函数C

打印效果为
```bash
[ 3876.650409] EXPORT_SYMBOL Module one, Init!
[ 3876.657586] EXPORT_SYMBOL Module two, Init!
[ 3876.657589] EXPORT_SYMBOL In Func: function_one...
[ 3876.657590] EXPORT_SYMBOL In Func: function_two...
[ 3876.664471] EXPORT_SYMBOL Module two, Exit!
[ 3876.705604] EXPORT_SYMBOL Module one, Exit!
```

两个教程：

第一个：https://blog.csdn.net/xhz1234/article/details/44278137

写道模块引用三种方法，其中第二种可以，就是修改B模块的Makefile文件，make前加一行
```Makefile
KBUILD_EXTRA_SYMBOLS += ~/export_symbol_one/Module.symvers
```

第二个：https://blog.csdn.net/qq_37858386/article/details/78444168

这个教程打印输出比较清楚，用的这个教程的.c代码

<br/>
下面是一样的，用的是第一个教程的代码，看当前这个仓库就好了

https://github.com/ziyan-zhang/another_kernel_module_call
