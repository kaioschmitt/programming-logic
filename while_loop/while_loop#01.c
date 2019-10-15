#include <stdio.h>

main(){
    system("title students average with while");
    int loop;
    loop = 1;
    float st_grade, nd_grade, average;
    
    while (loop <= 10){
        switch (loop){
        case 1:
            printf("Insert the first grade of the %dst stundent: ", loop);
            scanf("%f", &st_grade);
            printf("Insert the second grade of the %dst stundent: ", loop);
            scanf("%f", &nd_grade);
            average = (st_grade + nd_grade)/2;
            printf("The average is %.1f\n\n", average);
            loop = loop+1;
            break;
        case 2:
            printf("Insert the first grade of the %dnd stundent: ", loop);
            scanf("%f", &st_grade);
            printf("Insert the second grade of the %dnd stundent: ", loop);
            scanf("%f", &nd_grade);
            average = (st_grade + nd_grade)/2;
            printf("The average is %.1f\n\n", average);
            loop = loop+1;
            break;
        case 3:
            printf("Insert the first grade of the %drd stundent: ", loop);
            scanf("%f", &st_grade);
            printf("Insert the second grade of the %drd stundent: ", loop);
            scanf("%f", &nd_grade);
            average = (st_grade + nd_grade)/2;
            printf("The average is %.1f\n\n", average);
            loop = loop+1;
            break;
        default:
            printf("Insert the first grade of the %dth stundent: ", loop);
            scanf("%f", &st_grade);
            printf("Insert the second grade of the %dth stundent: ", loop);
            scanf("%f", &nd_grade);
            average = (st_grade + nd_grade)/2;
            printf("The average is %.1f\n\n", average);
            loop = loop+1;
            break;
        }
    }
}
