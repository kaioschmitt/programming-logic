#include <stdio.h>


main () {
    int number;

    printf("Insert a number\n");
    scanf("%d", &number);

    if (number >= 0)
        printf("The number is positive\n");
    else
        printf("The number is negative");
}
