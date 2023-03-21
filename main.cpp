#include <stdio.h>
#include <string.h>

// https://github.com/Arnuma/programm-tech_Zinyakov-N.V/tree/HomeWork_6.4


int main() {
    // 1
    char str1[100];
    printf("Enter a string: ");
    fgets(str1, 100, stdin);
    
    for (int i = 0; i < strlen(str1); i++) {
        str1[i] = str1[i+1];
    }
    
    printf("The string after deleting the first character: %s\n", str1);
    
    // 2
    char str2[100], buffer[100];
    int len = 0;
    printf("Enter a string: ");
    fgets(str2, 100, stdin);
    
    
    for (int i = strlen(str2) - 1; i >= 0; i--) {
        buffer[len] = str2[i];
        len++;
    }
    
    buffer[len] = '\0';
    
    printf("The reversed string: %s\n", buffer);
    
    return 0;
}