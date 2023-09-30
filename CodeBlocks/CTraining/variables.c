
int variables()
{
    /*
    ###Data Type###  ###printf()### ###scanf()###
    char(1,2)           %c              %c
    int                 %d              %d
    unsigned int        %u              %u
    short int           %hd             %hd
    unsigned short int  %hu             %hu
    long int            %ld             %ld
    unsigned long int   %lu             %lu
    float               %f              %f
    double              %f              %lf
    long double         %Lf             %Lf
    //signed veri tuleri negatif degerler alabiliyor. Veri tipini unsigned yaparak alabilecehi deger sayisini artirabilirsin. Orn.: signed char -128 ile 127 arasinda deger alabiliyor. Unsigned char ise 0 ile 255 arasinde deger alabiliyor.
    */

    //int: 4 bytes - Write Format: %d
    printf("===SUBJECT: INT===\n");
    int x;
    x = 20;

    printf("X number: %d", x);
    printf("\n");
    x = 30;

    printf("X number: %d", x);


    //float: 4 bytes - Write Format: %f
    printf("\n\n---------------------------\n\n");
    printf("===SUBJECT: FLOAT===\n");
    float moisture1;
    float moisture2;
    moisture1 = 15.455;

    printf("Y: %f", moisture1);
    printf("\n");
    printf("Y: %.2f", moisture1);
    printf("\n");
    printf("Y: %.1f", moisture1);

    moisture2 = 22.546;
    printf("\n");
    printf("Moisture1: %.2f - Moisture2: %.1f", moisture1, moisture2);


    //double: 8 bytes - Write Format: %lf
    printf("\n\n---------------------------\n\n");
    printf("===SUBJECT: DOUBLE===\n");

    double heat = 22.454;
    printf("Heat: %.2lf, Moisture: %.2f", heat, moisture1);



    //char: 1 byte - Write Format: %c
    printf("\n\n---------------------------\n\n");
    printf("===SUBJECT: CHAR===\n");

    char ch = 'A';
    printf("Char: %c", ch);

    //long: 8 bytes - Write Format: %
    printf("\n\n---------------------------\n\n");
    printf("===SUBJECT: LONG===\n");

    long long int a;
    a = 2147836498;

    printf("%lld", a);


    printf("\n\n---------------------------\n\n");
}

