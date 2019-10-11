#include <stdio.h>


main () {
    float st_grade, nd_grade, rd_grade, average;

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
}
