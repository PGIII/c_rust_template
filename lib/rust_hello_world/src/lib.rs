#[no_mangle]
pub extern "C" fn hello_from_rust() {
    if cfg!(debug_assertions) {
        println!("Debugging enabled");
    } else {
        println!("Debugging disabled");
    }
    println!("Hello From Rust! Hello");
}
