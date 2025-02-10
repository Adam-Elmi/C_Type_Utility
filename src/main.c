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