#include <stdio.h>

void main() {
    // question:
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    int count = 1;
    int starCount = 5;

    while (count <= 5)
    {
        for (size_t i = 0; i < count; i++)
        {
            //for star
            printf("*");
            //for space after star
            if( (i + 1) <= (count - 1) )
                printf(" ");
        }
        //new line
        printf("\n");
        //update count
        count++;
    }
    
}