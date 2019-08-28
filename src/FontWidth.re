type t = 
| Undefined
| UltraCondensed
| ExtraCondensed
| Condensed
| SemiCondensed
| Normal
| SemiExpanded
| Expanded
| ExtraExpanded
| UltraExpanded;

    let toInt = (v: t) => {
        switch (v) {
        // NOTE: Must be in sync with FontDescriptor.h!
        | Undefined => 0
        | UltraCondensed => 1
        | ExtraCondensed => 2
        | Condensed => 3
        | SemiCondensed => 4
        | Normal => 5
        | SemiExpanded => 6
        | Expanded => 7
        | ExtraExpanded => 8
        | UltraExpanded => 9
        }
    };

    let show = (v: t) => {
        switch (v) {
        // NOTE: Must be in sync with FontDescriptor.h!
        | Undefined => "Undefined"
        | UltraCondensed => "UltraCondensed"
        | ExtraCondensed => "ExtraCondensed"
        | Condensed => "Condensed"
        | SemiCondensed => "SemiCondensed"
        | Normal => "Normal"
        | SemiExpanded => "SemiExpanded"
        | Expanded => "Expanded"
        | ExtraExpanded => "ExtraExpanded"
        | UltraExpanded => "UltraExpanded"
        }
    };
