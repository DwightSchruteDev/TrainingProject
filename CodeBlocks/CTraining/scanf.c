
int scanfMethod ()
{
    int x;
    printf("Enter a number:");
    //if u need a user answer, use &
    scanf("%d", &x);
    printf("Your entered number: %d", x);

    printf("\n\n");

    float y;
    printf("Enter a float: ");
    scanf("%f", &y);
    printf("Moisture: %.2f", y);
}
