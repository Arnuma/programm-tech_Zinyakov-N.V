#include <stdio.h>

// https://github.com/Arnuma/programm-tech_Zinyakov-N.V/tree/HomeWork_4.2


#include <stdio.h>


int main() {
    int arr[7];

    printf("Task 1:\nEnter 7 integer values:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements of array:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }

    int n;
    printf("\n\nTask 2:\nEnter the number of integer values to be stored in array:\n");
    scanf("%d", &n);

    int arr2[n];

    printf("Enter %d integer values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Elements of array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}