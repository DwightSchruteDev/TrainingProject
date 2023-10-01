
int main ()
{
    /*
    int y = 10;
    for(int x=1; x <= y; x++)
    {
        printf("%d\n", x);
    }
    */

    //o'dan baslayip 3'er 3'er 100'e kadar sayan bir program:
    //Program, bu sayilarin toplamini sona yazdirsin.
    //Bu sayilar kac tanedir.
    /*
    int total = 0;
    int counter = 0;
    for(int i=0; i<=100; i+=3)
    {
        total += i;
        printf("%d | ", i);
        counter++;
    }

    printf("\n total: %d", total);
    printf("\n total number: %d", counter);*/

    //9'dan 100'e kadar 7'nin ve 3'un katlari
    int x = 7;
    int z = 3;
    for(int i=9; i <=100; i++)
    {
        /*
        if( ( (i % x) == 0) && ( (i % z) == 0) )
        {
            printf("%d, is a multiple of %d and %d.\n", i, x, z);
        }
        */

        if( i%(x*z ) == 0)
        {
            printf("%d, is a multiple of %d and %d.\n", i, x, z);
        }
    }
}
