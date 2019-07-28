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
    extern ResultSet *findFonts(FontDescriptor *query);

    CAMLprim value fm_findFont(value family, value weight, value italic, value monospace) {
        CAMLparam4(family, weight, italic, monospace);
        CAMLlocal1(ret);
        printf("fm_find_font\n");

        char* fontFamily = String_val(family);
        int fontWeight = Int_val(weight);
        int isItalic = Bool_val(italic);
        int isMono = Bool_val(monospace);

        caml_release_runtime_system();
        FontDescriptor *query = new FontDescriptor(NULL, NULL, fontFamily, NULL, FontWeightNormal, FontWidthUndefined, isItalic, isMono);
    
        FontDescriptor *font = findFont(query);
        printf("\n------\n");
        printf("Selected font:\n Path: %s\n Family: %s\n Monospace: %d\n", font->path, font->family, font->monospace);


        printf("Completed!\n");
        caml_acquire_runtime_system();

        ret = caml_alloc(7, 0);
        Store_field(ret, 0, caml_copy_string(font->path));
        Store_field(ret, 1, caml_copy_string(font->postscriptName));
        Store_field(ret, 2, caml_copy_string(font->family));
        Store_field(ret, 3, Val_int(font->weight));
        Store_field(ret, 4, Val_int(font->width));
        Store_field(ret, 5, Val_bool(font->italic));
        Store_field(ret, 6, Val_bool(font->monospace));

        CAMLreturn(ret);
    }
}
