mkdir build
cd build
conan install -g cmake_multi -s build_type=Release ..
conan install -g cmake_multi -s build_type=Debug ..
cd ..