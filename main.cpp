#include <stdio.h>
#include <string.h>

// https://github.com/Arnuma/programm-tech_Zinyakov-N.V/tree/HomeWork_6.3


int main() {

    char str1[100];
    printf("Enter a string: ");
    fgets(str1, 100, stdin);
    printf("The second character of the entered string: %c\n", str1[1]);
    printf("\n");
    
    
    char str2[100] = "World";
    int len = 0;
    while (str2[len] != '\0') {
        len++;
    }
    printf("The last element of the string: %c\n", str2[len-1]);
    
    char temp = str2[0];
    str2[0] = str2[len-1];
    str2[len-1] = temp;
    printf("The string after swapping the first and last elements: %s\n", str2);
    printf("\n");
    
    char str3[100] = "Hello-User";
    printf("Enter the index of the character to be deleted (from 1 to %d): ", strlen(str3));
    int index;
    scanf("%d", &index);
    
    for (int i = index - 1; i < strlen(str3) - 1; i++) {
        str3[i] = str3[i+1];
    }
    str3[strlen(str3) - 1] = '\0';
    
    printf("The string after deleting a character: %s\n", str3);
    
    return 0;
}