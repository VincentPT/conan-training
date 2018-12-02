# conan-training
Using conan echo system to implement CI/CD for C++ project

# Prerequisites
Conan version 1.9.2 or higher.

# How to build
On each project, generally, it should invoke conan install command for the first time.
```
conan insall ..
```

where working folder is a build folder
'..' is the folder containing the conanfile.txt

then run cmake comand to generate project file and compile the project.