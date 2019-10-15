#include <stdio.h>

main(){
    system("title odd or even");
    int loop, number, modulus_test;
    loop = 1;
    while (loop <= 20){
        switch (loop){
        case 1:
            printf("Insert the %dst number: ", loop);
            scanf("%d", &number);
            modulus_test = number % 2;
            if (modulus_test == 0){
                printf("The number %d is even\n", number);
            }
            else {
                printf("The number %d is odd\n", number);
            }
            loop = loop+1;
            break;
        case 2:
            printf("Insert the %dnd number: ", loop);
            scanf("%d", &number);
            modulus_test = number % 2;
            if (modulus_test == 0){
                printf("The number %d is even\n", number);
            }
            else {
                printf("The number %d is odd\n", number);
            }
            loop = loop+1;
            break;
        case 3:
            printf("Insert the %drd number: ", loop);
            scanf("%d", &number);
            modulus_test = number % 2;
            if (modulus_test == 0){
                printf("The number %d is even\n", number);
            }
            else {
                printf("The number %d is odd\n", number);
            }
            loop = loop+1;
            break;
        default:
            printf("Insert the %dth number: ", loop);
            scanf("%d", &number);
            modulus_test = number % 2;
            if (modulus_test == 0){
                printf("The number %d is even\n", number);
            }
            else {
                printf("The number %d is odd\n", number);
            }
            loop = loop+1;
            break;
        }
    }
}
