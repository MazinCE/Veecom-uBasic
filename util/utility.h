#ifndef UTILITY_H
#define UTILITY_H

#include "iom.h"
#include "printf.h"

#define put_char _putchar

void dma_write(char *str);
void dma_nwrite(char *str, uint16_t len);

char read_key(void);

#endif
