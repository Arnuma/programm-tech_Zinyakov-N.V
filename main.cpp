#include <stdio.h>

// https://github.com/Arnuma/programm-tech_Zinyakov-N.V/tree/HomeWork_3.5


int main() {
    int i, sum = 0;
    
    // Вывод слова "Hello" 9 раз
    for (i = 0; i < 9; i++) {
        printf("Hello\n");
    }
    
    // Вывод чисел от 0 до 15
    for (i = 0; i <= 15; i++) {
        printf("%d\n", i);
    }
    
    // Вывод нечетных чисел от 0 до 15
    printf("Odd numbers from 0 to 15:\n");
    for (i = 1; i <= 15; i += 2) {
        printf("%d\n", i);
    }
    printf("\n");
    
    
    // Сумма чисел от 5 до 15
    for (i = 5; i <= 15; i++) {
        sum += i;
    }
    
    printf("Sum: %d\n", sum);
    return 0;
}