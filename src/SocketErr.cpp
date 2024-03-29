#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <winsock2.h>
#include "SocketErr.h"

void errexit(const char *format, ...) {
    va_list args;
    va_start(args, format);
    vfprintf(stderr, format, args);
    va_end(args);
}