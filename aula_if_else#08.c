#include <stdio.h>


main () {
    int st_number, nd_number;

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
}
