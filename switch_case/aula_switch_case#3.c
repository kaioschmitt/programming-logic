#include <stdio.h>

main (){
    system("title Forward Sardine");
    int instalments, result;
    float price;

    start:
    printf("Insert the price: ");
    scanf("%f", &price);
    printf(" Choose the instalments payment \n (5) \n (10) \n (12) \n (24) \n");
    scanf(" %d", &instalments);
    if (instalments != 4 && instalments != 10 && instalments != 12 && instalments != 24)
    {
        goto error_return;
    }

    system("cls");
    result = price / instalments;
    printf(" %.2f per month\n", result);
    system("pause");
    system("cls");
    goto start;

    error_return:
    system("cls");
    printf(" !!! Insert a valid choice !!! \n\n");
    goto start;
}