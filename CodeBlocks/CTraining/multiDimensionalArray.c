#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m[2][3] = {{1,2,3},{4,5,6}};
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t z = 0; z < 3; z++)
        {
            printf("%d ", m[i][z]);
        }
        printf("\n");
    }   
    return 0;
}
