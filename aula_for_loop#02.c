#include <stdio.h>

main () {
    system("title Numbers greater than 50");
    int value, loop, result;
    result=0;
    for (loop = 1; loop <= 20; loop++){
        switch (loop){
            case 1:
                system("cls");
                printf("Insert the %dst number: ", loop);
                scanf("%d", &value);
                if (value >= 50){
                    result++;
                }
                break;
            case 2:
                system("cls");
                printf("Insert the %dnd number: ", loop);
                scanf("%d", &value);
                if (value >= 50){
                    result++;
                }
                break;
            case 3:
                system("cls");
                printf("Insert the %drd number: ", loop);
                scanf("%d", &value);
                if (value >= 50){
                    result++;
                }
                break;
            default:
                system("cls");
                printf("Insert the %dth number: ", loop);
                scanf("%d", &value);
                if (value >= 50){
                    result++;
                }
                break;   
        }     
    }
    system("cls");
    printf("%d numbers are greater than 50.\n\n", result);
}
