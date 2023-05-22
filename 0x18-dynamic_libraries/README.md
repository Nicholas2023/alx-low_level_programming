# Creating a Dynamic Library with Listed Functions

This repository contains a script and source files to create a dynamic library(`libdynamic.so`) that includes various functions. The dynamic library can be used in C programing to provide the implementation of these functions at runtime.


## Functions included

The dynamic library `libdynamic.so` includes the following functions:

* int _putchar(char c)
* int _islower(int c)
* int _isalpha(int c)
* int _abs(int n)
* int _isupper(int c)
* int _isdigit(int c)
* int _strlen(char *s)
* void _puts(char *s)
* char *_strcpy(char *dest, char *src)
* int _atoi(char *s)
* char *_strcat(char *dest, char *src)
* char *_strncat(char *dest, char *src, int n)
* char *_strncpy(char *dest, char *src, int n)
* int _strcmp(char *s1, char *s2)
* char *_memset(char *dest, char b, unsigned int n)
* char *_memcpy(char *dest, char *src, unsigned int n)
* char *_strchr(char *s, char *c)
* unsigned int _strspn(char *s, char *accept)
* char *_strpbrk(char *s, char *accept)
* char *_strstr(char *haystack, char *needle)


## Repository Contents

* `1-create_dynamic_lib.sh`: A shell script that creates the dynamic library by compiling the provided source files.

* `main.h` : A header file containing the prototypes of the functions included in the dynamic library.

* `libdynamic.so` : The resulting dynamic library file.


## Usage

To use the dynamic library `libdynamic.so` in your C programs, you need to follow these steps:

1. Clone the repository: `git clone https://github.com/your-username/your-repo.git`

2. Change to the repository directory: `cd your-repo`

3. Make sure you have the necessary dependencies installed

4. Run the shell script to create the dynamic library: `./1-create_dynamic_lib.sh`

5.  After successful execution, you will have the `libdynamic.so` file in the repository directory.

6. Link the dynamic library in your C program during compilation. For example:
	* `gcc -Wall -pedantic -Werror -Wextra -L. your-program.c -ldynamic -o your-program`

7. Set the `LD_LIBRARY_PATH` environment variable to include the current directory:
	* `export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH`

8. Run your program: `./your-program`


Please note that these instructions are on a Linux environment. Adjustments may be required for different operating systems.


## License

This project is licensed under ALX SE program

Feel free to modify and use the code according to your needs. Contributions are also welcome!!

If you have any questions or suggestion, please feel free to open an issue or contact `nicholasodhiambo2015@gmail.com`
