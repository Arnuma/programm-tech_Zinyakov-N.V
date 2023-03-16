#include <stdio.h>

// https://github.com/Arnuma/programm-tech_Zinyakov-N.V/tree/HomeWork_4.4


int main() {
    int n, i;
    float sum = 0.0, average;
    int min, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for(i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
        sum += arr[i];
    }
    average = sum / n;

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Sum: %0.2f\n", sum);
    printf("Average: %0.2f\n", average);

    return 0;
}