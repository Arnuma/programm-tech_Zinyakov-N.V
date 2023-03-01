#include <stdio.h>


// https://github.com/Arnuma/programm-tech_Zinyakov-N.V/tree/HomeWork_2.2


main()
{
    int a,b;
    printf("a=");
    scanf("%i", &a);
    printf("b=");
    scanf("%i", &b);
    if(a>b)
    {
        printf("Больше");
    }
    else 
    {
        if(a<b)
        {
            printf("Меньше");
        }
        else
        {
            printf("Равно");
        }
    }
}
