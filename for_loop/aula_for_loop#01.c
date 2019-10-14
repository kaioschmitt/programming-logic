/* for loop 
    syntax:
    for ( init; condition; increment ){
    statement(s);
    }
*/  
#include <stdio.h>

main (){
    system("title Double and Triple");
    int loop, value;

    for (loop = 1; loop <= 10; loop++){
        switch (loop){
        case 1:
            printf("Insert the %dst number: ", loop);
            scanf("%d", &value);
            printf("The double is %d \nThe triple is %d \n\n", value*2, value*3);
            break;
        case 2:
            printf("Insert the %dnd number: ", loop);
            scanf("%d", &value);
            printf("The double is %d \nThe triple is %d \n\n", value*2, value*3);
            break;
        case 3:
            printf("Insert the %drd number: ", loop);
            scanf("%d", &value);
            printf("The double is %d \nThe triple is %d \n\n", value*2, value*3);
            break;
        default:
            printf("Insert the %dth number: ", loop);
            scanf("%d", &value);
            printf("The double is %d \nThe triple is %d \n\n", value*2, value*3);
            break;        
        }  
    } 
}
/* credito a tutuvis passos <3 */
