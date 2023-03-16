#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// https://github.com/Arnuma/programm-tech_Zinyakov-N.V/tree/HomeWork_5.3



int main() {




    int n, m;
    printf("Enter the number of rows: ");


    scanf("%d", &n);


    printf("Enter the number of columns: ");

    
    scanf("%d", &m);

    int arr[n][m];
    srand(time(NULL)); 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            arr[i][j] = rand() % 10 - 2;
        }
    }
    printf("The randomly generated array is:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}