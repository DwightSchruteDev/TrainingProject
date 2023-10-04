#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    do
    {
        printf("Enter a number please: \n");
        scanf("%d", &number);
        if(number >= 1) {
            for (size_t i = number; i > 1; i--)
            {
                number *= (i-1);
            }
            printf("%d\n", number);
        }
        else{
            printf("Invalid number!\n");
        }
    } while (number >= 1);   
    return 0;
}