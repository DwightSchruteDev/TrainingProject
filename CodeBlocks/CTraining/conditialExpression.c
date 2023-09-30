
int conditionalExpression()
{
    int heat;
    heat = 162;

    if(heat == 26)
    {
        printf("Weather is hot.");
    }
    else if(heat < 9)
    {
        printf("Weather is cold.");
    }
    else if (heat == 0)
    {
        printf("Weatherr is very cold.");
    }
    else if (heat >= 20 && heat <=25)
    {
        printf("Weather is normal.");
    }
    else if(heat > 100 || heat < -80)
    {
        printf("This is not real :/");
    }


}
