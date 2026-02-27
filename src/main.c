
/* Future need to display using uart 3 and printf at mainboard */
#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include <stdbool.h>

/* Create first hello world program */
#include <stdio.h>

const struct device *uart_dev;

int main(void) {
    printf("Hello, World!\n");
    return 0;
}

/* End of program */