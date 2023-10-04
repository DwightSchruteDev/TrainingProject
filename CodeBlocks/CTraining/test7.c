#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("How many elemans of array?: ");
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    //int arr[n];

    if(arr == NULL)
    {
        printf("Invalid process.");
        return 1;
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("Print enter a %d. element: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nProcess completed. Listing a your array...\n\n");
    int count=0;
    while (count<n)
    {
        printf("%d. element: %d\n", count, arr[count]);
        count++;
    }
    free(arr);
    return 0;
}