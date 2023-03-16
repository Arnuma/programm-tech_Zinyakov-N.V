#include <stdio.h>

// https://github.com/Arnuma/programm-tech_Zinyakov-N.V/tree/HomeWork_5.2


int main() {
	
    int n, m;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int arr[n][m];

    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("The entered array is:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}