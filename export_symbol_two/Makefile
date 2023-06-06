obj-m += export_symbol_two.o

KDIR := /lib/modules/`uname -r`/build
PWD ?= $(shell pwd)

KBUILD_EXTRA_SYMBOLS += ../export_symbol_one/Module.symvers

all:
	make -C $(KDIR) M=$(PWD) modules

clean:
	rm -f *.o *.ko *.mod.c *.order *.symvers .*.cmd *.mod .*.o.d