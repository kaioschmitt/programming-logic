#include <stdio.h>


main () {
    int st_number, nd_number;

    printf("Digite o primeiro numero\n");
    scanf("%d", &st_number);
    printf("Digite o segundo numero\n");
    scanf("%d", &nd_number);

    if (st_number < nd_number) {
        printf("O numero %d eh menor\n", st_number);
    }
    else {
        if (st_number > nd_number){
            printf("O numero %d eh menor\n", nd_number);
        }
        else
        {
            printf("Os numeros sao iguais\n");
        }
    }
}
