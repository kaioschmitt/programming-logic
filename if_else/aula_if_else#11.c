/* detalhe: eu que quis fzd assim cheio de if msm :) */

#include <stdio.h>

main () {
    int st_number, nd_number, rd_number;

    printf("Insira o primeiro valor\n");
    scanf("%d", &st_number);
    printf("Insira  o segundo valor\n");
    scanf("%d", &nd_number);
    printf("Insira  o terceiro valor\n");
    scanf("%d", &rd_number);

    if (st_number > nd_number && nd_number >= rd_number){
        printf("%d - %d - %d", rd_number, nd_number, st_number);
    }
    else{
        if (nd_number >= st_number && nd_number > rd_number && st_number >= rd_number){
            printf("%d - %d - %d", rd_number, st_number, nd_number);
        }
        else{
            if (nd_number > st_number && nd_number >= rd_number && st_number <= rd_number){
               printf("%d - %d - %d", st_number, rd_number, nd_number);
            }
            else{
                if (nd_number > st_number && nd_number >= rd_number){
                    printf("%d - %d - %d", st_number, nd_number, rd_number);
                }
                else{
                    if (nd_number < st_number && st_number < rd_number){
                        printf("%d - %d - %d", nd_number, st_number, rd_number);
                    }
                    else{
                        if (nd_number < rd_number && rd_number <= st_number){
                            printf("%d - %d - %d", nd_number, rd_number, st_number);
                        }
                        else{
                            printf("%d - %d - %d", st_number, nd_number, rd_number);
                        }              
                    }
                }
            }
        }
    }
}