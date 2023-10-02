#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int randTest(int argc, char const *argv[])
{
    srand(time(NULL));
    for (size_t i = 0; i < 5; i++)
    {
        int x = rand();
        //from 90 to 99
        //printf("%d\n", x%10+90); //why 10: (99-90)+1

        //from 90 to 100
        //printf("%d\n", x%11+90); //why 11: (100-90)+1

        //from 20 to 30
        //printf("%d\n", x%11+20); //why 11: (30-20)+1

        //from 5 to 55
        printf("%d\n", x%51+5); //why 51: (55-5)+1
    }
    return 0;
}