
external _findFont: (string, int, bool, bool) => FontDescriptor.t = "fm_findFont";

let test = () => {

print_endline ("Hello from FontManager");
_findFont("Arial", 1, true, true);
};
