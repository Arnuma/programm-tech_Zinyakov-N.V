#include <stdio.h>

// https://github.com/Arnuma/programm-tech_Zinyakov-N.V/tree/HomeWork_3.8


main (){
  int n, i;
    int min, max, sum;
    double avg;

    printf("Enter the number of elements: ");
    scanf("%d", &n);


    printf("Enter %d integers:\n", n);
    scanf("%d", &min);
    max = min;
    sum = min;
    for (i = 1; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
        sum += num;
    }


    avg = (double)sum / n;

    // вывод результатов
    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);
    printf("Sum of numbers: %d\n", sum);
    printf("Average of numbers: %.2f\n", avg);

    return 0;
}