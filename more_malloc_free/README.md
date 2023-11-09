### More malloc(), free()

#### 1. `_putchar`
- Signature: `int _putchar(char c);`
- Description: Outputs a single character to the standard output.
  
#### 2. `malloc_checked`
- Signature: `void *malloc_checked(unsigned int b);`
- Description: Allocates memory using `malloc`. Exits the program with status `98` if memory allocation fails.

#### 3. `string_nconcat`
- Signature: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
- Description: Concatenates two strings (`s1` and the first `n` characters of `s2`). Returns a new dynamically allocated string.

#### 4. `_calloc`
- Signature: `void *_calloc(unsigned int nmemb, unsigned int size);`
- Description: Allocates memory for an array of size `nmemb` elements, each of `size` bytes. Initializes the memory to zero.

#### 5. `array_range`
- Signature: `int *array_range(int min, int max);`
- Description: Creates an array of integers from `min` to `max` (inclusive). Returns a pointer to the newly allocated array.
