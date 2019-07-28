Console.log("Running Test Program:");
let () = print_endline(Lib.Util.hello());

let printer = (v) => {
    let derp = ref(0);

    while (derp^ < 1000000) {
        print_endline ("[" ++ v ++ "]" ++ string_of_int(derp^));
        incr(derp);
    }
}

/* let t1 = Thread.create(printer, "a"); */
/* let t2 = Thread.create(printer, "b"); */
/* let t3 = Thread.create(printer, "c"); */
/* let t4 = Thread.create(printer, "c"); */

/* Thread.join(t1); */
/* Thread.join(t2); */
/* Thread.join(t3); */
/* Thread.join(t4); */

type actions = 
| Change(string);

module MyStore = Lib.Redux.Make({
    type state = string;
    type action = actions;


    let initialState = "hello";

    let reducer = (s, a) => switch (a) {
    | Change(v) => s ++ v;
    }
});

MyStore.subscribe((newState) => {
    print_endline ("new state: " ++ newState);
});

MyStore.dispatch(Change(" world"));
MyStore.dispatch(Change(" again"));
