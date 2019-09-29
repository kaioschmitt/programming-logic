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

    //VARIAVEIS

    int number, st_number, nd_number, rd_number, modulus_test;
    float st_grade, nd_grade, rd_grade, average;

    //FIM VARIAVEIS

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

    // PRIMEIRA QUESTAO

    question1:

    printf("Digite o primeiro numero\n");
    scanf("%d", &st_number);
    printf("Digite o segundo numero\n");
    scanf("%d", &nd_number);

    if (st_number > nd_number) {
        printf("O numero %d eh maior\n", st_number);
    }
    else {
        if (st_number < nd_number){
            printf("O numero %d eh maior\n", nd_number);
        }
        else
        {
            printf("Os numeros sao iguais\n");
        }
    }
    system ("pause");
    goto inicio;

    //SEGUNDA QUESTAO

    question2:

    printf("Digite o primeiro numero\n");
    scanf("%d", &st_number);
    printf("Digite o segundo numero\n");
    scanf("%d", &nd_number);

    if (st_number > nd_number) {
        printf("O numero %d eh maior\n", st_number);
    }
    else {
        if (st_number < nd_number){
            printf("O numero %d eh maior\n", nd_number);
        }
        else
        {
            printf("Os numeros sao iguais\n");
        }
    }
    system ("pause");
    goto inicio;

    //TERCEIRA QUESTAO

    question3:

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
    system ("pause");
    goto inicio;

    //QUARTA QUESTAO

    question4:

    printf("Enter the first number\n");
    scanf("%d", &st_number);
    printf("Enter the second number\n");
    scanf("%d", &nd_number);

    //show the first number multiplied by 3
    printf("First result: %d\n", st_number*3);
    //show the second number multiplied by 4
    printf("Second result: %d", nd_number*4);
    system ("pause");
    goto inicio;

    //QUINTA QUESTAO

    question5:

    printf("Insert a number\n");
    scanf("%d", &number);

    if (number >= 0) {
        printf("The number is positive\n");
    }
    else {
        printf("The number is negative");
    system ("pause");
    }
    goto inicio;

    //SEXTA QUESTAO

    question6:

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
    system ("pause");
    goto inicio;

    //SETIMA QUESTAO

    question7:

    printf("Insert the first value\n");
    scanf("%f", &st_grade);
    printf("Insert the second value\n");
    scanf("%f", &nd_grade);
    printf("Insert the third value\n");
    scanf("%f", &rd_grade);

    average = (st_grade + nd_grade + rd_grade)/3;

    if (average >= 7){
        printf("Approved");
    }
    else{
        printf("Failed");
    }
    system ("pause");
    goto inicio;

    //OITAVA QUESTAO

    question8:

    printf("Insert the first value\n");
    scanf("%d", &st_number);
    printf("Insert the second value\n");
    scanf("%d", &nd_number);

    if (st_number >= nd_number){
        printf("%d - %d", st_number,nd_number);
    }
    else{
        printf("%d - %d", nd_number,st_number);
    }
    system ("pause");
    goto inicio;

}