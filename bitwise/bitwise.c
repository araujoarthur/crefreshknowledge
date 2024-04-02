#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
    uint8_t a = 0b00000001;
    printf("a = %d\n", a);

    printf("a << 1 = %d\n", a << 1); // It's the same as multiplying 1 (the original value) by 2^n (with n being 1 (<< 1) in this case)

    printf("a << 2 = %d\n", a << 2); // It's the same as multiplying 1 (the original value) by 2^n (with n being 2 (<< 2) in this case)

    printf("a: %d\n", a);	//  We didnt't change a, so it stays 1.

    printf("a >> 1 = %d\n", a >> 1); // It's the same as dividing 1 (the original value) by 2^n (with n being 1 (>> 1) in this case); the result is 0.5, but since we're using integers, it will be 0.

    uint8_t b = 0b10000000;
    uint8_t c = 0b01010101;
    uint8_t d = 0b11111111;
    uint8_t e = 0b01111111;

    printf("b = %d\n", b); //128
    printf("c = %d\n", c); //85	
    printf("d = %d\n", d); //255
    printf("e = %d\n", e); //127	
    printf("b | a = %d\n", b | a); // It's the same as doing a bitwise OR operation between the two numbers. The result is 129.
    printf("b | c = %d\n", b | c); // It's the same as doing a bitwise OR operation between the two numbers. The result is 213.
    printf("b | d = %d\n", b | d); // It's the same as doing a bitwise OR operation between the two numbers. The result is 255.
    printf("b | e = %d\n", b | e); // It's the same as doing a bitwise OR operation between the two numbers. The result is 255.

    printf("b & a = %d\n", b & a); // It's the same as doing a bitwise AND operation between the two numbers. The result is 0.	
    printf("b & c = %d\n", b & c); // It's the same as doing a bitwise AND operation between the two numbers. The result is 0.
    printf("b & d = %d\n", b & d); // It's the same as doing a bitwise AND operation between the two numbers. The result is 128.
    printf("b & e = %d\n", b & e); // It's the same as doing a bitwise AND operation between the two numbers. The result is 0.

    printf("b ^ a = %d\n", b ^ a); // It's the same as doing a bitwise XOR operation between the two numbers. The result is 129.	
    printf("b ^ c = %d\n", b ^ c); // It's the same as doing a bitwise XOR operation between the two numbers. The result is 213.
    printf("b ^ d = %d\n", b ^ d); // It's the same as doing a bitwise XOR operation between the two numbers. The result is 127.
    printf("b ^ e = %d\n", b ^ e); // It's the same as doing a bitwise XOR operation between the two numbers. The result is 128.

    printf("~a = %d\n", ~a); // It's the same as doing a bitwise NOT operation on the number. The result is 254. 
    printf("~b = %d\n", ~b); // It's the same as doing a bitwise NOT operation on the number. The result is 127.
    printf("~c = %d\n", ~c); // It's the same as doing a bitwise NOT operation on the number. The result is 170.
    printf("~d = %d\n", ~d); // It's the same as doing a bitwise NOT operation on the number. The result is 0.
    printf("~e = %d\n", ~e); // It's the same as doing a bitwise NOT operation on the number. The result is 128.
}