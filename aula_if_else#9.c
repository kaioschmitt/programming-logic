#include <stdio.h>


main () {
    int st_number, nd_number, rd_number;

    printf("Insert the first value\n");
    scanf("%d", &st_number);
    printf("Insert the second value\n");
    scanf("%d", &nd_number);
    printf("Insert the third value\n");
    scanf("%d", &rd_number);

   if (st_number < nd_number && st_number < rd_number) {
       printf("%d is less than other numbers", st_number);
   }
   else {
       if (nd_number < st_number && nd_number < rd_number) {
           printf("%d is less than other numbers", nd_number);
       }
       else {
           printf("%d is less than other numbers", rd_number);
       }
   }
}