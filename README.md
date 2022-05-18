# printf

ALX SE team project (Chukwuemeka Ngumoha, Chinazaekpere Nnaji) focused on implementing a replica of the standard printf function used in the C programming language. This is about owning your own printf function and being able to use it in place of the standard printf function.

## Program Files in This Project

### main.h
This is the main header file which contains all of the function prototypes of the functions used in this project.

### _putchar.c
This is the program file which contains the function `_putchar` for printing out characters to stdout.

### _printf.c
This is the main program file of the code which actually contains our implementation of the standard printf function `_printf` which takes a format string and prints out the content of the format string, substituting the values of the optional parameters in order whenever it encounters a designated format specifier. To call it in your code, you must include the `main.h` header file and then type it in like this.

For example if we wanted to print the name of a person named `Emeka`, we would create the following test file `main.c` and type the code into it:

```
#include "main.h"

int main(void)
{
    char *name = "Emeka";
    _printf("Name: %s\n", name);
 
    return (0);
}
```
And then we would compile it and run it to get the output:

```
~$
Name: Emeka
~$
```
