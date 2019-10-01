/* Elabore um algoritmo em C que leia 2 valores inteiros 
e mostre o quadrado dos números se forem iguais e o cubo se forem diferentes. 
Se forem diferentes diga se o maior é par e se o menor é negativo. */

#include <stdio.h>

main() {

    int st_number, nd_number, lw_number, hg_number;

    printf("Digite o primeiro valor: ");
    scanf("%d", &st_number);
    printf("Digite o segundo valor: ");
    scanf("%d", &nd_number);

    if (st_number > nd_number)
    {
        hg_number = st_number;
        lw_number = nd_number;
    }
    else
    {
        hg_number = nd_number;
        lw_number = st_number;
    }
    

    if (st_number == nd_number)
    {
        printf("\nO quadrado dos numeros eh: %d\n", st_number*nd_number);
    }
    else
    {
        printf("\nO cubo dos numeros eh: %d, %d\n", st_number*st_number*st_number, nd_number*nd_number*nd_number);
        if (hg_number % 2 == 0) {
        printf("O numero %d eh par\n", hg_number);
        }
        else{
        printf("O numero %d eh impar\n", hg_number);
        }

        if (lw_number < 0){
        printf("O numero %d eh negativo\n", lw_number);
        }
        else{
        printf("O numero %d eh positivo\n", lw_number);
        }
    }
}
