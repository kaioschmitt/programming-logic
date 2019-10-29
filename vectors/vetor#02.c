#include <stdio.h>

main (){
    int number[10], even_numbers=0, loop;

    for ( loop = 0; loop < 10; loop++)
    {
        printf("Insira um valor: ");
        scanf("%d", &number[loop]);
    }

    for ( loop = 0; loop < 10; loop++){
        if (number[loop] % 2 == 0){
            even_numbers++;
        }
    }

    printf("There are %d even numbers.", even_numbers);

}
