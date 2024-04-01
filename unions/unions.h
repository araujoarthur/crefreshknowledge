#ifndef UNIONS_H
#define UNIONS_H

union Data {
    int i;
    float f;
}; // This one was created without typedef so it is meant to be declared as union Data foo;

typedef union _dataSet {
    int integer;
    float floating;
} DataSet;

void usingTypedef();
void usingUnionType();

#endif