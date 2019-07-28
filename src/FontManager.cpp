#include <stdio.h>
#include <caml/alloc.h>
#include <caml/bigarray.h>
#include <caml/callback.h>
#include <caml/memory.h>
#include <caml/mlvalues.h>
#include <caml/threads.h>

#include "FontDescriptor.h"

extern "C" {
    extern FontDescriptor *findFont(FontDescriptor *query);

    CAMLprim value fm_findFont(value unit) {
        printf("fm_find_font\n");

        FontDescriptor *query = new FontDescriptor(NULL, NULL, "Arial", NULL, FontWeightUndefined, FontWidthUndefined, false, false);
        FontDescriptor *font = findFont(query);

        printf("Found font:\n Path: %s\n Family: %s\n", font->path, font->family);

        return Val_unit;
    }
}
