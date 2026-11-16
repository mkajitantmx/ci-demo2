#include <stdio.h>
#include <openssl/objects.h>
#include <openssl/evp.h>
#include <openssl/hmac.h>
#include <openssl/ocsp.h>
#include <openssl/rand.h>
#include "ssl_locl.h"

    static const char* col_fmt_logs[] = {
        "No.",              "%m",
        "Time",             "%t",
        "Event name",       "%Cus:evt.type:0:R",
        "Proc Name",        "%Cus:proc.name:0:R",
        "PID",              "%Cus:proc.pid:0:R",
        "TID",              "%Cus:thread.tid:0:R",
        "FD",               "%Cus:fd.num:0:R",
        "FD Name",          "%Cus:fd.name:0:R",
        "Container Name",   "%Cus:container.name:0:R",
        "Arguments",        "%Cus:evt.args:0:R",
        "Info",             "%i"
    };
