#include <stdio.h>

main (){
    int globe=0, bst=0, record=0, falggers=0, noa=0, loop=1, choice;
    
    while (loop <= 1500)
    {
        loop++;
        printf("There are five channels:\n 1- Globe\n 2- BST\n 3- Record\n 4- Flaggers\n 5- None of above\n Choose one of your preference: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            globe++;
            break;
        case 2:
            bst++;
            break;
        case 3:
            record++;
            break;
        case 4:
            falggers++;
            break;
        case 5:
            noa++;
            break;
        default:
            printf("you're a dummy\n");
            choice--;
            break;
        }
    }
    printf("Channel's preference:\n Globe- %d\n BST- %d\n Record- %d\n Flaggers- %d\n None of above- %d", globe, bst, record, falggers, noa);
}
