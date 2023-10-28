# C Functions Using Arrays and Pointers

This repository contains a collection of C functions that work with arrays and pointers. These functions can be used to manipulate strings, perform mathematical operations, and more.

## Functions List

1. **`_putchar(char c)`**
   - This function is used to print a single character to the standard output.

2. **`reset_to_98(int *n)`**
   - This function takes a pointer to an integer as an argument and sets the value of the integer it points to to 98.

3. **`swap_int(int *a, int *b)`**
   - Swaps the values of two integers pointed to by `a` and `b`.

4. **`_strlen(char *s)`**
   - Calculates the length of a string (character array) pointed to by `s` and returns the length as an integer.

5. **`print_rev(char *s)`**
   - Prints a string in reverse order, starting from the last character and ending with the first character.

6. **`_puts(char *str)`**
   - Prints a string to the standard output.

7. **`rev_string(char *s)`**
   - Reverses the characters in a string pointed to by `s` in-place.

8. **`puts_half(char *str)`**
   - Prints the second half of a string pointed to by `str`.

9. **`puts2(char *str)`**
   - Prints every other character in a string pointed to by `str`, starting with the first character.

10. **`print_array(int *a, int n)`**
    - Prints the elements of an integer array `a` up to a specified length `n`.

11. **`_strcpy(char *dest, char *src)`**
    - Copies a string pointed to by `src` into the character array pointed to by `dest`.

12. **`_strcat(char *dest, char *src)`**
    - Concatenates (appends) the string pointed to by `src` to the end of the string pointed to by `dest`.

13. **`_strncat(char *dest, char *src, int n)`**
    - Concatenates (appends) the first `n` characters from the string pointed to by `src` to the end of the string pointed to by `dest`.

14. **`_atoi(char *s)`**
    - Converts a string pointed to by `s` to an integer.

15. **`_strncpy(char *dest, char *src, int n)`**
    - Copies at most `n` characters from the string pointed to by `src` into the character array pointed to by `dest`.

16. **`_strcmp(char *s1, char *s2)`**
    - Compares two strings pointed to by `s1` and `s2` and returns an integer that indicates their relationship.

17. **`reverse_array(int *a, int n)`**
    - Reverses the elements in an integer array `a` of length `n` in-place.

18. **`string_toupper(char *str)`**
    - Converts all lowercase letters in the string pointed to by `str` to uppercase.

19. **`cap_string(char *str)`**
    - Capitalizes the first letter of each word in the string pointed to by `str`.

## Usage

You can use these functions in your C programs by including the appropriate header files and calling them with the necessary arguments. Make sure to compile your program with these functions, and they will perform the specified operations.

```c
#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    
    // Reverse the string
    rev_string(str);
    printf("Reversed string: %s\n", str);

    return 0;
}

