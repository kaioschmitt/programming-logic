#include <stdio.h>


main () {
    int st_number, nd_number;

    printf("Enter the first number\n");
    scanf("%d", &st_number);
    printf("Enter the second number\n");
    scanf("%d", &nd_number);

    //show the first number multiplied by 3
    printf("First result: %d\n", st_number*3);
    //show the second number multiplied by 4
    printf("Second result: %d", nd_number*4);
}
