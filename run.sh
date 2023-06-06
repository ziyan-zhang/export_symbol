###
 # @Author: zy nscc ubuntu22.04 1920548152@qq.com
 # @Date: 2023-06-06 20:41:35
 # @LastEditors: zy nscc ubuntu22.04 1920548152@qq.com
 # @LastEditTime: 2023-06-06 22:06:21
 # @FilePath: /export_symbol/run.sh
 # @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
### 
sudo dmesg -c

sudo rmmod export_symbol_two
sudo rmmod export_symbol_one

cd export_symbol_one/
make clean
make all

cd ../export_symbol_two/
make clean
make all

cd ../
sudo insmod export_symbol_one/export_symbol_one.ko
sudo insmod export_symbol_two/export_symbol_two.ko

sudo rmmod export_symbol_two
sudo rmmod export_symbol_one

sudo dmesg