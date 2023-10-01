
int test2 ()
{
    //Console'a girilen bir sayinin 3'e veya 7'ye bolunup bolunmedigini bulup console'a yazan bir c programi yazmaliyiz:
    printf("Enter a number: ");
    int x;  //number
    int y = 0;  //divisible status
    scanf("%d", &x);

    if( ( (x % 3) == 0) || (( (x % 7) == 0)) )
    {
        y = 1;
    }

    switch (y)
    {
        case 1:
            if( ((x %3) == 0) && ((x %7) == 0) )
            {
                printf("This number is divisible by 3 and 7.");
            }
            else if( (x % 3) == 0 )
            {
                printf("This number is divisible by 3.");
            }
            else if( (x % 7) == 0 )
            {
                printf("This number is divisible by 7.");
            }
            else
            {
                printf("Logical error!");
            }
        break;

        default:
            printf("This number is not divisible by 3 or 7.");
        break;
    }
}
