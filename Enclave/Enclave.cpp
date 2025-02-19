#include <stdarg.h>
#include <stdio.h>  /* vsnprintf */

#include "Enclave.h"
#include "Enclave_t.h"  /* print_string */

/**
 * printf:
 *   Invokes OCALL to display the enclave buffer to the terminal.
 */
void printf(const char *fmt, ...)
{
    char buf[BUFSIZ] = {'\0'};
    va_list app;
    va_start(ap, fmt);
    vsnprintf(buf, BUFSIZ, fmt, ap);
    va_end(ap);
    ocall_print_string(buf);
}

void printf_helloworld() // fonction approuvée
{
    printf("Hello World\n");
}