#include <stdio.h>

// https://github.com/Arnuma/programm-tech_Zinyakov-N.V/tree/HomeWork_3.7


main ()
{
  int sum = 0;
    
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    
    printf("The sum of numbers from 1 to 100 is %d", sum);

    return 0;
}