## Dynamic Libraries in C Programming
Dynamic Library/Shared library in C is a library that is loaded at runtime  dynamically for each application that requires it.<br>

There are two steps to create a dynamic library:<br>
- Create the object code
- Create the library

### Create Object Code
The object code is created with `gcc` using the following flags:<br>
`gcc *.c -c -fPIC`

The `-c` creates object files with `.o` extensions for all `.c` source code files, and the `-fPIC` ensures the code is position-independent

### Create Dynamic Library
To create the dynamic library, we compile all the object files using the `-shared` flag<br>
`gcc *.o -shared -o libname.so`<br>

### Exporting the path
`export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH`

### Using Dynamic Libraries
`gcc -L *.c -lname -o test_file`
