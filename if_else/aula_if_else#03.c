#include <stdio.h>


main () {
    int st_number, nd_number, modulus_test;

    printf("Enter the first number\n");
    scanf("%d", &st_number);
    printf("Enter the second number\n");
    scanf("%d", &nd_number);

    modulus_test = st_number + nd_number;

    if (modulus_test % 2 == 0) {
        printf("The number %d is even\n", modulus_test);
    }
    else {
        printf("The number %d is odd\n", modulus_test);
    }
}
