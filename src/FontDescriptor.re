type t = {
  path: string,
  postscriptName: string,
  family: string,
  weight: FontWeight.t,
  width: FontWidth.t,
  italic: bool,
  monospace: bool,
};

let show = (v: t) => {
  "FontDescriptor:\n"
  ++ " - Path: "
  ++ v.path
  ++ "\n"
  ++ " - Family: "
  ++ v.family
  ++ "\n"
  ++ " - Weight: "
  ++ FontWeight.show(v.weight)
  ++ "\n"
  ++ " - Width: "
  ++ FontWidth.show(v.width)
  ++ "\n"
  ++ " - Monospace: "
  ++ string_of_bool(v.monospace)
  ++ "\n";
};
