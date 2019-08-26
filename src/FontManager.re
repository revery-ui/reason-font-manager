module FontDescriptor = FontDescriptor;

external _findFont: (string, bool, bool, bool) => FontDescriptor.t = "fm_findFont";

let findFont = (
    ~family: string,
    ~bold: bool,
    ~italic: bool,
    ~mono: bool,
    ()
) => {
    _findFont(family, bold, italic, mono);
};
