#include <stdio.h>

int loopForArray(int *x, int size)
{
    for (size_t i = 0; i < size; i++)
        printf("%d. => %d\n", i, x[i]);
}

int main(int argc, char const *argv[])
{
    //for number of array = (sizeof(x)/sizeof(x[0]))
    /*
    int x[] = { 18, 9, 12, 24 };
    for (size_t i = 0; i < (sizeof(x)/sizeof(x[0])); i++)
    {
        printf("%d. => %d\n", i, x[i]);
    }*/
    int y[5];
    y[0] = 10;
    y[1] = 14;
    y[2] = 8;
    y[3] = 15;
    y[4] = 22;
    int size = sizeof(y) / sizeof(y[0]);
    loopForArray(y, size);
    return 0;
}