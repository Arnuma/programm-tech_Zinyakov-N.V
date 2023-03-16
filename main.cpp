#include <stdio.h>

// https://github.com/Arnuma/programm-tech_Zinyakov-N.V/tree/HomeWork_5.5

const int N = 7; 
const int M = 8; 


void sort_rows(int arr[N][M]) {
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < M - 1; j++) { 
            for (int k = j + 1; k < M; k++) { 
                if (arr[i][k] < arr[i][j]) { 

                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }
}

void swap_columns(int arr[N][M], int c1, int c2) {
    for (int i = 0; i < N; i++) { 
        
        int temp = arr[i][c1];
        arr[i][c1] = arr[i][c2];
        arr[i][c2] = temp;
    }
}

int main() {
    int arr[N][M] = {{9, 5, 7, 3},
                     {2, 8, 1, 6},
                     {4, 0, 9, 5}};

    printf("Original array:\n");
    printf("\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    sort_rows(arr);


    printf("\nSorted array:\n");
    printf("\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    swap_columns(arr, 0, M - 1);


    printf("\nSwapped array:\n");
    printf("\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}