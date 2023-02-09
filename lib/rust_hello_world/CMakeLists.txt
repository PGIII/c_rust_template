#Define Rust as external project 
set_directory_properties(PROPERTIES EP_PREFIX ${CMAKE_BINARY_DIR}/rust)
ExternalProject_Add(
    rust_hello_world_ep
    DOWNLOAD_COMMAND ""
    CONFIGURE_COMMAND ""
    BUILD_COMMAND cargo build COMMAND cargo build --release
    BINARY_DIR ${CMAKE_CURRENT_LIST_DIR}
	BUILD_ALWAYS ON
	BUILD_BYPRODUCTS   ${CMAKE_CURRENT_LIST_DIR}/target/release/librust_hello_world.a ${CMAKE_CURRENT_LIST_DIR}/target/debug/librust_hello_world.a
    INSTALL_COMMAND ""
    LOG_BUILD ON
)
#create interface Lib linking External lib, so that main Cmakelist can just link library as usual
add_library(rust_hello_world INTERFACE)
add_dependencies(rust_hello_world INTERFACE rust_hello_world_ep)
target_link_libraries(rust_hello_world INTERFACE
    debug "${CMAKE_CURRENT_LIST_DIR}/target/debug/librust_hello_world.a"
    optimized "${CMAKE_CURRENT_LIST_DIR}/target/release/librust_hello_world.a"
)