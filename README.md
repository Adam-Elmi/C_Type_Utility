# C Type Checker Utility

This is a simple **C Type Checker** using `_Generic`. It provides:
- `TYPEOF(x)` → Returns the type of `x` as a string.
- `IS_TYPE(x, "type")` → Checks if `x` is of a given type.

## Usage
### **Include the Header**
```c
#include <stdio.h>
#include "type_checker.h"

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    printf("Type of a: %s\n", TYPEOF(a));
    printf("Type of b: %s\n", TYPEOF(b));
    printf("Type of c: %s\n", TYPEOF(c));

    if (IS_TYPE(a, "int")) {
        printf("a is an integer!\n");
    }

    if (IS_TYPE(b, "float")) {
        printf("b is a float!\n");
    }

    return 0;
}
