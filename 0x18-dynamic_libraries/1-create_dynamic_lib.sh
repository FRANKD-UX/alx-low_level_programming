#!/bin/bash
# Create a dynamic library called liball.so from all the .c files in the current directory
gcc -shared -o liball.so *.c

