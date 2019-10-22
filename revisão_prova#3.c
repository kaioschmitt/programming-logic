/* 1 - Escrever um algoritmo que leia um conjunto de 50 informações contendo, cada uma delas, a
altura e o sexo de uma pessoa (código=1, masculino código=2, feminino), calcule e mostre o
seguinte:
a) a maior altura da turma
b) a média da altura dos homens
c) a média da altura da turma.
*/

#include <stdio.h>

main (){
    int loop=1, choice;
    float m_height=0, f_height=0, avr_male=0, hi_height=0, avr_class=0, qtd_men=0, qtd_ppl=0;
    
    while (loop <= 4){
        loop++;
        printf("1- male \n2- female \nChoose one of them: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Insert the height: ");
            scanf("%f", &m_height);
            if (m_height > hi_height)
            {
                hi_height = m_height;
            }
            qtd_ppl++;
            qtd_men++;
            avr_class = avr_class + m_height;
            avr_male = avr_male + m_height;
            break;
        case 2:
            printf("Insert the height: ");
            scanf("%f", &f_height);
            if (m_height > hi_height)
            {
                hi_height = m_height;
            }
            qtd_ppl++;
            avr_male = avr_male + m_height;
            break;
        default:
            printf("Invalid option\n");
            loop--;
            break;
        }
    }

    printf("The highest height is: %.1f\n", hi_height);
    printf("The average of the men is: %.1f\n", avr_male/qtd_men);
    printf("The average of the classroom is: %.1f\n", avr_class/qtd_ppl);
}
