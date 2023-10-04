#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int arr[20] = { 0 };
    int twoDigitNumbers = 0;
    int oneDigitNumbers = 0;
    
    for (size_t i = 0; i < 20; i++)
    {
        arr[i] = rand() % 100;
        printf("%d | ", arr[i]);
        if( arr[i] > 9 && arr[i] < 100)
            twoDigitNumbers++;
        if( arr[i] <= 9 )
            oneDigitNumbers++;
    }

    printf("\n");
    printf("One Digit Numbers: %d\n", oneDigitNumbers);
    printf("Two Digit Numbers: %d\n", twoDigitNumbers);

    return 0;
}
