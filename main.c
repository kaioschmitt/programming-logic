#include <stdio.h>

main(){
    int question;

    inicio:
    printf("[1] Primeira Questao\n");
    printf("[2] Segunda Questao\n");
    printf("[3] Terceira Questao\n");
    printf("[4] Quarta Questao\n");
    printf("[5] Quinta Questao\n");
    printf("[6] Sexta Questao\n");
    printf("[7] Setima Questao\n");
    printf("[8] Oitava Questao\n");

    printf("Escolha uma questao para executar");
    scanf("%d", &question); 

    switch (question)
    {
    case 1:
        goto question1;
        break;
    case 2:
        goto question2;
        break;
    case 3:
        goto question3;
        break;
    case 4:
        goto question4;
        break;
    case 5:
        goto question5;
        break;
    case 6:
        goto question6;
        break;
    case 7:
        goto question7;
        break;
    case 8:
        goto question8;
        break;
    
    default:
        goto inicio;
        break;
    }

    question1:
    printf("Finge que a questao 1 ta aq");
    system ("pause");
    goto inicio;
    question2:
    printf("Finge que a questao 2 ta aq");
    system ("pause");
    goto inicio;
    question3:
    printf("Finge que a questao 3 ta aq");
    system ("pause");
    goto inicio;
    question4:
    printf("Finge que a questao 4 ta aq");
    system ("pause");
    goto inicio;
    question5:
    printf("Finge que a questao 5 ta aq");
    system ("pause");
    goto inicio;
    question6:
    printf("Finge que a questao 6 ta aq");
    system ("pause");
    goto inicio;
    question7:
    printf("Finge que a questao 7 ta aq");
    system ("pause");
    goto inicio;
    question8:
    printf("Finge que a questao 8 ta aq");
    system ("pause");
    goto inicio;

}



seu if ta assim:

if ()
    /* code */
else
    /* code */


e deveria esta assim:

if ()
{
    /* code */
}
else
{
    /* code */
}


