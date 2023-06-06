obj-m += export_symbol_one.o


KDIR := /lib/modules/`uname -r`/build
PWD ?= $(shell pwd)

all:
	make -C $(KDIR) M=$(PWD) modules

clean:
	rm -f *.o *.ko *.mod.c *.order *.symvers .*.cmd *.mod .*.o.d