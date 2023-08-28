[Blog Post](https://www.pg3.dev/post?id=4)
# Requires

* CMake
* Ninja
* Rustc/Cargo
 
# Building

Building of both the rust module and the main C program are done through CMake with CMakePresets

## Configuring

### Release

`cmake --preset default`

### Debug

`cmake --preset debug`

## Building

### Release

`cmake --build --preset default`

### Debug

`cmake --build --preset debug`

