    type t = 
    | Undefined
    | Thin
    | UltraLight
    | Light
    | Normal
    | Medium
    | SemiBold
    | Bold
    | UltraBold
    | Heavy;

    let toInt = (v: t) => {
        switch (v) {
        // NOTE: Must be in sync with FontDescriptor.h!
        | Undefined => 0
        | Thin => 100
        | UltraLight => 200
        | Light => 300
        | Normal => 400
        | Medium => 500
        | SemiBold => 600
        | Bold => 700
        | UltraBold => 800
        | Heavy => 900
        }
    };

    let show = (v: t) => {
        // NOTE: Must be in sync with FontDescriptor.h!
        switch (v) {
        | Undefined => "Undefined"
        | Thin => "Thin"
        | UltraLight => "UltraLight"
        | Light => "Light"
        | Normal => "Normal"
        | Medium => "Medium"
        | SemiBold => "SemiBold"
        | Bold => "Bold"
        | UltraBold => "UltraBold"
        | Heavy => "Heavy"
        }
    };
