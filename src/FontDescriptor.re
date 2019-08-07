type t = {
    path: string,
    postscriptName: string,
    family: string,
    weight: int,
    width: int,
    italic: bool,
    monospace: bool,
};

let show = (v: t) => {
"FontDescriptor:\n"
++ " - Path: " ++ v.path ++ "\n"
++ " - Family: " ++ v.family ++ "\n"
++ " - Monospace: " ++ string_of_bool(v.monospace) ++ "\n"
}
