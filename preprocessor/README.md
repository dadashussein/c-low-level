
# Preprocessor C

This repository contains several files related to preprocessor directives and macros. Let's go through the files and their purpose:

## Files

- `0-object_like_macro.h`: This header file defines a macro named `SIZE` and assigns it the value `1024`.
- `1-pi.h`: This header file defines a macro named `PI` and assigns it the value `3.14159265359`.
- `2-main.c`: This C source file contains a `main` function that prints the name of the current source file using the `__FILE__` predefined macro.
- `3-function_like_macro.h`: This header file defines a macro named `ABS` that takes a single argument `x` and computes the absolute value of `x`.
- `4-sum.h`: This header file defines a macro named `SUM` that takes two arguments `x` and `y` and computes their sum.

## Usage

To use these files, follow these steps:

1. Include the desired header file(s) in your C source file using the `#include` directive.
2. Make sure the header files are located in the same directory or provide the correct path when including them.
3. Utilize the defined macros in your code as needed.

For example, you can include the `1-pi.h` header file in your C source file to use the `PI` macro:

```c
#include "1-pi.h"
#include <stdio.h>

int main(void) {
    double radius = 5.0;
    double area = PI * radius * radius;

    printf("The area of the circle is: %f\n", area);
    return 0;
}
```

In the above code, the `PI` macro is used to calculate the area of a circle based on the given radius.

Remember to compile your C source files together with the necessary header files using an appropriate compiler command.

Feel free to explore and modify the provided files to further understand and experiment with preprocessor directives and macros.

Happy coding!
