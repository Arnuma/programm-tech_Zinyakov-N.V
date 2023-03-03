#include <stdio.h>

// https://github.com/Arnuma/programm-tech_Zinyakov-N.V/tree/HomeWork_3.6


main (){
  {


    // задание 1

	printf("Task #1\n");
	printf("\n");
    int n = 1;
    while (n <= 10)
    {
        int result = n * 5;
        printf("%d * 5 = %d\n", n, result);
        n++;
    }
    
    printf("\n");


    //  задание 2

    printf("Task #2\n");
    printf("\n");
    
    int num;
    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("-----------------\n");
        if (num == 7)
        {
            printf("You entered number is 7. The program is ending.\n");
            break;
        }
        else
        {
            printf("You entered number is %d.\n", num);
            printf("-----------------\n");
            if (num > 7)
            {
                printf("%d is greater than 7.\n", num);
            }
            else if (num < 7)
            {
                printf("%d is less than 7.\n", num);
            }

            if (num > 10)
            {
                printf("%d is greater than 10.\n", num);
            }
            else if (num < 10)
            {
                printf("%d is less than 10.\n", num);
            }

            if (num % 2 == 0)
            {
                printf("%d is divisible by 2.\n", num);
            }
            else
            {
                printf("%d is not divisible by 2.\n", num);
            }

            if (num % 3 == 0)
            {
                printf("%d is divisible by 3.\n", num);
                printf("-----------------\n");
                printf("\n");
            }
            else
            {
                printf("%d is not divisible by 3.\n", num);
                printf("-----------------\n");
                printf("\n");
            }
        }
    }
}
}