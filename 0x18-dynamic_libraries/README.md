"Project 0x18. C - Dynamic libraries

Learning Objectives:
General
- Gain an understanding of dynamic libraries, their functionality, creation, and usage.
- Explore the environment variable $LD_LIBRARY_PATH and learn how to utilize it.
- Differentiate between static and shared libraries.
- Get familiar with basic usage of nm, ldd, and ldconfig.

Resources:
Read or watch the following:
- Exploring the Difference between Dynamic and Static Libraries (Static and Dynamic Linking)
- Creating Dynamic Libraries on Linux
- Technical Writing

Tasks:

0. A library is not a luxury but one of the necessities of life
Create the dynamic library libholberton.so, which contains the following functions:

- int _putchar(char c);
- int _islower(int c);
- int _isalpha(int c);
- int _abs(int n);
- int _isupper(int c);
- int _isdigit(int c);
- int _strlen(char *s);
- void _puts(char *s);
- char *_strcpy(char *dest, char *src);
- int _atoi(char *s);
- char *_strcat(char *dest, char *src);
- char *_strncat(char *dest, char *src, int n);
- char *_strncpy(char *dest, char *src, int n);
- int _strcmp(char *s1, char *s2);
- char *_memset(char *s, char b, unsigned int n);
- char *_memcpy(char *dest, char *src, unsigned int n);
- char *_strchr(char *s, char c);
- unsigned int _strspn(char *s, char *accept);
- char *_strpbrk(char *s, char *accept);
- char *_strstr(char *haystack, char *needle);

If any of the above functions are not implemented, please create empty functions with the correct prototypes. Make sure to include your holberton.h file in the repository, which should contain at least the prototypes of the aforementioned functions.

1. Without libraries what have we? We have no past and no future
Write a script that creates a dynamic library called liball.so from all the .c files in the current directory.

2. Either write something worth reading or do something worth writing
Compose a blog post that explains the differences between static and dynamic libraries. The post should cover the following points:

- Importance of using libraries in general.
- Working principles of libraries.
- Creation process of libraries (Linux only).
- Usage of libraries (Linux only).
- Key distinctions between static and dynamic libraries.
- Advantages and drawbacks associated with each type.

Please note that the blog post should be informative and well-written.

Feel free to explore the given resources for a more in-depth understanding of the topic."
