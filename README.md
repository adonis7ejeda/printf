# printf Project

The _printf() function produce output according to a format as described below.
                                                                                
       * %s print a string                                                      
       * %c print a character                                                   
       * %d print a   decimal                                                   
       * %i print an integer                                                    
                                                                                
## Example

#include "holberton.h"                                                          
int main(void)                                                                  
{                                                                               
   _printf("%s\n", "My name is _printf");                                       
   return (0);                                                                  
 }                                                                              
                                                                                
### Installing

for have the code in your local machine you only need download the code files and put it into a directory and compile it with gcc compiler 
```
gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c
```
## Built With

All the code was write under ubuntu 14.04 using the compiler version
gcc 4.84 for 64 bits


## Tasks

| Task             | Description                              |
| ------------------ | ---------------------------------------- |
| Task 0  | function that produces output according to a format: c, s and % |
| Task 1  | Function that produces conversion specifier d and i |
| Task 2  | Manpage |

## Files

| File               | Description                              |
| ------------------ | ---------------------------------------- |
|   _printf.c      | Main code about the function |
|   _putchar.c     | To print a character |
|   f_character.c  | To print one character |
|   f_integer.c    | To print an integer number |
|   f_string.c     | To print an sring |
|   holberton.h    | Libraries and prototypes |
|   man_3_printf   | Man page for _printf |

## Contributing and Authors

-- Adonis Tejeda - Holberton Student                                          
-- Jesus Gonzalez - Holberton Student                                          