#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (size_t i = 0; i < 10; i++)
    {
        if (i==5)
            continue;
        printf("%d\n", i);
        if (i==8)
            break;
    }
    
    return 0;
}
