
int test3()
{
    printf("Enter a number: ");
    int x; // number
    scanf("%d", &x);

    if( x % 5 == 0) {
        printf("This number is a multiple of 5.");
    }
    else
    {
        printf("This number is not a multiple of 5.");
    }
}
