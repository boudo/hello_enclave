#ifndef ENCLAVE_H
#define ENCLAVE_H

#include <stdlib.h>
#include <assert.h>

#if defined(__cplusplus)
extern "C" {
#endif

void printf(const char *fmt, ...);
void printf_helloworld(); // Goal

#if defined(__cplusplus)
}
#endif

#endif