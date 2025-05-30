
// os.h

#ifndef __OS_H__
#define __OS_H__

#include "platform.h"
#include "types.h"

#include <stdarg.h>
#include <stddef.h>

// uart
extern int  uart_putc(char ch);
extern void uart_puts(char* s);

// printf
extern int  printf(const char* s, ...);
extern void panic(char* s);

// memory management
extern void* page_alloc(int npages);
extern void  page_free(void* p);

#endif /* __OS_H__ */
