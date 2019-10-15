#include <stdio.h>

main(){
    system("title odd or even");
    int loop, age;
    while (loop <= 74){
        loop ++;
        switch (loop){
        case 1:
            printf("Insert the %dst age: ", loop);
            scanf("%d", &age);
            if (age >= 18){
                printf("Over 18\n\n");
            }
            else {
                printf("Under age\n\n");
            }
            break;
        case 2:
            printf("Insert the %dnd age: ", loop);
            scanf("%d", &age);
            if (age >= 18){
                printf("Over 18\n\n");
            }
            else {
                printf("Under age\n\n");
            }
            break;
        case 3:
            printf("Insert the %drd age: ", loop);
            scanf("%d", &age);
            if (age >= 18){
                printf("Over 18\n\n");
            }
            else {
                printf("Under age\n\n");
            }
            break;
        default:
           printf("Insert the %dth age: ", loop);
            scanf("%d", &age);
            if (age >= 18){
                printf("Over 18\n\n");
            }
            else {
                printf("Under age\n\n");
            }
            break;
        }
    }
}
