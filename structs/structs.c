#include <stdio.h>
#include <stdlib.h>
#include "structs.h"


int main(void) {
    PositionVector v1 = {1, 2, 3};

    printf("v1.x = %.1f\n", v1.x);
    printf("v1.y = %.1f\n", v1.y);
    printf("v1.z = %.1f\n", v1.z);

    updatePosition(&v1);

    printf("\nAfter updatePosition(&v1):\n");
    printf("v1.x = %.1f\n", v1.x);
    printf("v1.y = %.1f\n", v1.y);
    printf("v1.z = %.1f\n", v1.z);
    
    PPositionVector p = createPositionVector();

    printf("\nAfter createPositionVector():\n");
    printf("p->x = %.1f\n", p->x);
    printf("p->y = %.1f\n", p->y);
    printf("p->z = %.1f\n", p->z);
    free(p);

    return 0;
}

void updatePosition(PPositionVector p) {
    p->x *= 10;
    p->y *= 10;
    p->z *= 15;
}

// Allocates it on the heap
PPositionVector createPositionVector(void) {
    PPositionVector p = malloc(sizeof(PositionVector));
    if (p!= NULL) {
        p->x = 0;
        p->y = 0;
        p->z = 0;
    }
    return p;
}

// Allocates it on the stack
/*
This approach is incorrect and unsafe because it returns the address of a local (stack-allocated) variable. 
Accessing this memory from the caller is undefined behavior because the variable p goes out of scope once the function returns.
*/
PPositionVector createPositionVector(void) {
    PositionVector p = {0, 0, 0};

    return &p;
}