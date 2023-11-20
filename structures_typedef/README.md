## Struct in C

In C programming, a `struct` (short for structure) is a user-defined data type that allows you to combine different types of variables under a single name. It enables you to group variables together to form a composite data type.

### Example:

```c
struct person {
    char *name;
    int age;
    float height;
};
```
In this example, `struct person` combines a character pointer for the name, an integer for age, and a float for height.

## Typedef in C

`typedef` is a C keyword used to give alternative names to existing data types. It allows you to create aliases or shorter names for data types, improving code readability and maintainability.

### Example:
```c
typedef  struct person 
{ char *name;
  int age;
  float height;
 } person_t;
```
Here, `typedef` creates an alias `person_t` for the `struct person`. Using `person_t` instead of `struct person` simplifies the code and makes it more intuitive.

```c
#include "dog.h"

int main() {
    // Initializing a dog
    dog_t my_dog;
    init_dog(&my_dog, "Buddy", 5, "Charlie");

    // Printing dog details
    print_dog(&my_dog);

    // Creating a new dog dynamically
    dog_t *new_dog_ptr = new_dog("Max", 3, "Emily");

    // Freeing memory allocated to the new dog
    free_dog(new_dog_ptr);

    return 0;
}
```
## Explanation

-   `struct dog`: Defines a structure representing attributes of a dog, including name, age, and owner.
-   `typedef dog_t`: Creates an alias `dog_t` for `struct dog`.
-   Functions `init_dog`, `print_dog`, `new_dog`, and `free_dog` are defined to initialize, print details, create a new dog, and free memory, respectively.

### Functions:

-   `init_dog`: Initializes a dog's attributes.
-   `print_dog`: Displays a dog's details.
-   `new_dog`: Dynamically creates a new dog.
-   `free_dog`: Frees memory allocated to a dog.
