obj-m += export_symbol_two.o

KDIR := /lib/modules/`uname -r`/build
PWD ?= $(shell pwd)

all:
	make -C $(KDIR) M=$(PWD) modules

clean:
	rm -rf *.o