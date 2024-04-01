#include <stdlib.h>
#include <stdio.h>
#include "enums.h"

int main() {
    enum Weekdays day;
    day = Sunday;
    printf("Day: %d\n", day);

    Months month = December;
    printf("Month: %d\n", month);

    switch(day) {
        case Monday:
            printf("Monday\n");
            break;
        case Tuesday:
            printf("Tuesday\n");
            break;
        case Wednesday:
            printf("Wednesday\n");
            break;
        case Thursday:
            printf("Thursday\n");
            break;
        case Friday:
            printf("Friday\n");
            break;
        case Saturday:
            printf( "It's saturday, yay!\n");
            break;
        case Sunday:
            printf("Huh... it's already sunday\n");
            break;
        default:
            break;
    }
    return 0;
}