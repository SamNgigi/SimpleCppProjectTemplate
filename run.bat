@echo off
for %%i in ("%~dp0.") do set "dir_name=%%~ni"

if not exist build (
    mkdir build
)

cd build
cmake -DCMAKE_TOOLCHAIN_FILE=C:\Users\user\vcpkg\scripts\buildsystems\vcpkg.cmake .. @REM  Add your own path. Run vcpkg integrate install to get it
cmake --build .

cd ..
build\Debug\%dir_name%.exe
build\Debug\%dir_name%_test.exe
