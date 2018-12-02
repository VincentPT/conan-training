# cpprestsdk-shared
Using cpprest sdk shared library.

# Prerequisites
Conan version 1.9.2 or higher.

# How to build
The build process is same as general build process but you may need to add 'bincrafters' into conan remote repositories.
```
conan remote add bincrafters https://api.bintray.com/conan/bincrafters/public-conan
```

This project uses multi-configurations, so use following commands.
```
conan install .. -g cmake_multi -s build_type=Release
conan install .. -g cmake_multi -s build_type=Debug
```

instead of
```
conan install ..
```