#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct _positionVector {
    float x;
    float y;
    float z;
} PositionVector, *PPositionVector;

void updatePosition(PPositionVector p);

PPositionVector createPositionVector(void);

#endif