#include <stdio.h>


main () {
    int number;

    printf("Insert a number\n");
    scanf("%d", &number);

    if (number > 10){
        printf("The number is greater than 10\n");
    }
    else
        if (number < 10){
            printf("The number is less than 10\n");
        }
        else{
            printf("The number is equal to 10");
        }
}
