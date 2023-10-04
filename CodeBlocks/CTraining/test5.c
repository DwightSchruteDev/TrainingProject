#include <stdio.h>

int stars(int i)
{
    for (size_t z = 1; z <= i; z++)
    {
        printf("*");
        if( (z + 1) <= i )
            printf(" ");
    }
}

int main(int argc, char const *argv[])
{
    // question:
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    int fiveStarRowCount = 4;
    
    for (size_t i = 5; i >= 1; i--)
    {
        if(i == 5) {
            for (size_t x = 1; x <= fiveStarRowCount; x++)
            {
                stars(i);
                printf("\n");
            }
            
        }
        stars(i);
        printf("\n");
    }
    return 0;
}