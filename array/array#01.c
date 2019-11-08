#include <stdio.h>

main (){
    int number[10], loop;

    for ( loop = 0; loop < 10; loop++)
    {
        printf("Insira um valor: ");
        scanf("%d", &number[loop]);
    }
    
    loop=0;
    printf("Even numbers:\n");
    while (loop < 10){
        if (number[loop] % 2 == 0){
            printf("%d ", number[loop]);
        }
        loop++;
    }
    loop=0;
    printf("\nOdd numbers:\n");
    while (loop < 10){
        if (number[loop] % 2 != 0){
            printf("%d ", number[loop]);
        }
        loop++;
    }
    
}
