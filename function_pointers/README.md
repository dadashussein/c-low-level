## Calculating Function
-   **`3-main.c`:** Contains the main function that parses command-line arguments, validates inputs, performs the calculation, and prints the result.
-   **`3-calc.h`:** Header file declaring function prototypes and the structure of the calculator functions.
-   **`3-get_op_func.c`:** Defines a function `get_op_func` that returns a pointer to the appropriate arithmetic operation function based on the provided operator.
-   **`3-op_functions.c`:** Defines functions for each arithmetic operation (+, -, *, /, %)

**Usage:** To use the program, compile the source files and run the executable, providing two integers and an arithmetic operator as command-line arguments. For example:

bashCopy code

`./calculator 5 + 3` 

**Error Handling:**

-   The program checks for the correct number of command-line arguments. If there are fewer than four arguments, it prints an error message and exits with status 98.
-   If attempting to divide by zero, the program prints an error message and exits with status 100.
-   If an invalid operator is provided, the program prints an error message and exits with status 99.

**Function Pointers:** The program utilizes function pointers to select the appropriate arithmetic operation based on the provided operator. The `get_op_func` function returns a pointer to the corresponding operation function.

**Example:**

bashCopy code

`./calculator 5 + 3
Output: 8` 
##  Other functions:

1.  **`void print_name(char *name, void (*f)(char *))`:**
    
    -   This function takes a string (`name`) and a function pointer (`f`) as parameters.
    -   It calls the function pointed to by `f` and passes the string `name` to it.
    -   The function does not return a value.
2.  **`void array_iterator(int *array, size_t size, void (*action)(int))`:**
    
    -   This function takes an integer array (`array`), its size (`size`), and a function pointer (`action`) as parameters.
    -   It applies the function pointed to by `action` to each element of the array.
    -   The function does not return a value.
3.  **`int int_index(int *array, int size, int (*cmp)(int))`:**
    
    -   This function takes an integer array (`array`), its size (`size`), and a function pointer (`cmp`) as parameters.
    -   It searches for an element in the array for which the `cmp` function returns a non-zero value.
    -   If found, it returns the index of the first matching element; otherwise, it returns -1.
