#include <stdio.h>
#include <caml/alloc.h>
#include <caml/bigarray.h>
#include <caml/callback.h>
#include <caml/memory.h>
#include <caml/mlvalues.h>
#include <caml/threads.h>

#include "FontDescriptor.h"

extern "C" {
    CAMLprim value fm_findFont(value unit) {
        printf("fm_find_font\n");

        return Val_unit;
    }
}
