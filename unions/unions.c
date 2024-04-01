#include <stdlib.h>
#include <stdio.h>
#include "unions.h"

//  Unions hold different types but only one at any time (like, we can declare a union that can hold an int, a float, and a char at the same time but only one of them at a time).
// Union members are not allocated next to eachother, instead the are allocated on the same place, what means they share the memory space, which is defined by its biggest member.

int main(void) {

    usingTypedef();
    usingUnionType();

    return 0;
}

void usingTypedef() {
        DataSet data;
    data.integer  = 10;

    printf("data.integer: %d\n", data.integer);

    data.floating = 20.5;;
    printf("data.floating: %f\n", data.floating);

    printf("\n\nAfter changing the value of the data union\n");
    printf("data.integer: %d\n", data.integer);
    printf("data.floating: %f\n", data.floating);
}

void usingUnionType() {
    union Data foo;
    foo.i = 10;

    printf("foo.i: %d\n", foo.i);

    foo.f = 20.5;
    printf("foo.f: %f\n", foo.f);

    printf("\n\nAfter changing the value of the foo union\n");
    printf("foo.i: %d\n", foo.i);
    printf("foo.f: %f\n", foo.f);
}