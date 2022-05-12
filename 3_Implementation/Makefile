CC =arm-none-eabi-gcc

MACH=cortex-m4

CFLAGS =-c -mcpu=$(MACH) -mthumb -std=gnu11 -Wall -O0 
LDFLAGS= -nostdlib -T stm32_ls.ld

all:clean main.o driver.o stm32_startup.o main.elf run

main.o:main.c
	$(CC) $(CFLAGS) -o $@ $^

driver.o:driver.c
	$(CC) $(CFLAGS) -o $@ $^

stm32_startup.o:stm32_startup.c
	$(CC) $(CFLAGS) -o $@ $^

main.elf:main.o driver.o stm32_startup.o
	$(CC) $(LDFLAGS) -o $@ $^
	
run:
	qemu-system-gnuarmeclipse.exe -M STM32F4-Discovery -mcu STM32F407VG -kernel main.elf
	
clean:
	-rm -rf *.o *.elf