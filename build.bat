rmdir build /s /q
mkdir build

cd build 

cmake .. -G "Visual Studio 17 2022" -A x64 -DCMAKE_BUILD_TYPE=debug -DCMAKE_INSTALL_PREFIX=install  -DBUILD_EXAMPLE=ON