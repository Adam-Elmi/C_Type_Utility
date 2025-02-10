#ifndef TYPE_CHECKER_H
#define TYPE_CHECKER_H

#include <stdio.h>
#include <string.h>

#define TYPEOF(x) _Generic((x), \
    int: "int", \
    float: "float", \
    double: "double", \
    char: "char", \
    default: "unknown")

#define IS_TYPE(x, t) (strcmp(TYPEOF(x), t) == 0)

#endif // TYPE_CHECKER_H
