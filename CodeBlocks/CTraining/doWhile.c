#include <stdio.h>
int doWhileTest () {
    /* int number = 5;
    do {
        printf("Run Code: %d\n", number);
        number--;
    } while(number<5 && number>0); */
    int selected;
    do
    {
        printf("Enter a number please: 1 | 2 | 3 | 4\n");
        scanf("%d", &selected);
        printf("Your selected: %d\n", selected);
    } while (selected > 0 && selected <5);
    
}