@echo off

if not exist buld (
    mkdir build
)

cd build
cmake -DCMAKE_TOOLCHAIN_FILE=C:\Users\samtn\vcpkg\scripts\buildsystems\vcpkg.cmake .. 
@REM cmake .. 
cmake --build .
@REM ctest -C Debug -V

cd ..
build\Debug\myApp.exe
build\Debug\tests.exe