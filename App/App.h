#ifndef APP_H
#define APP_H

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include "sgx_error.h" // sgx_status_t
#include "sgx_eid.h"   // sgx_enclave_id_t

#ifndef TRUE
# define TRUE 1
#endif

#ifndef FALSE
# define FALSE 0
#endif

# define TOKEN_FILENAME "enclave.token"
# define ENCLAVE_FILENAME "enclave.signed.so"

extern sgx_enclave_id_t global_eid; // global enclave id

#if defined(__cplusplus)
extern "C" {
#endif

#if defined(___cplusplus)
}
#endif

#endif // APP_H