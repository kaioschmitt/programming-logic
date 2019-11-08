#include <stdio.h>

main (){
    int number[6], odd_numbers=0, loop;

    for ( loop = 0; loop < 6; loop++)
    {
        printf("Insira um valor: ");
        scanf("%d", &number[loop]);
    }

    for ( loop = 0; loop < 6; loop++){
        if (number[loop] % 2 != 0){
           odd_numbers = odd_numbers + number [loop];
        }
    }

    printf("%d", odd_numbers);

}
