#include <stdio.h>

main (){
    int st_number, nd_number, temporary, loop;

    printf("Insert the first value: ");
    scanf("%d", &st_number);
    printf("Insert the second value: ");
    scanf("%d", &nd_number);

    if (st_number > nd_number){
        temporary = st_number;
        st_number = nd_number;
        nd_number = temporary;
    }

    for ( loop = st_number; loop < nd_number; loop++){
        if (st_number % 2 == 0){
            printf("%d\n", st_number);
        }
        st_number++;
    }
}
