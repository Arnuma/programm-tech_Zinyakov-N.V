#include <stdio.h>

// https://github.com/Arnuma/programm-tech_Zinyakov-N.V/tree/HomeWork_7.4


bool is_square(int n) {
    int i = 1;
    while (i * i < n) {
        i++;
    }
    return i * i == n;
}

void is_square(int n, bool* result) {
    *result = is_square(n);
}

void is_square(int n, bool& result) {
    result = is_square(n);
}


int main() {
    int a, b, c;
    printf("Enter three natural numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("\n");

    bool a_is_square, b_is_square, c_is_square;

    a_is_square = is_square(a);
    b_is_square = is_square(b);
    c_is_square = is_square(c);

    printf("%d is%s a square of any other integer.\n", a, a_is_square ? "" : " not");
    printf("%d is%s a square of any other integer.\n", b, b_is_square ? "" : " not");
    printf("%d is%s a square of any other integer.\n", c, c_is_square ? "" : " not");
    printf("\n");
    

    is_square(a, &a_is_square);
    is_square(b, &b_is_square);
    is_square(c, &c_is_square);

    printf("%d is%s a square of any other integer.\n", a, a_is_square ? "" : " not");
    printf("%d is%s a square of any other integer.\n", b, b_is_square ? "" : " not");
    printf("%d is%s a square of any other integer.\n", c, c_is_square ? "" : " not");
    printf("\n");


    is_square(a, c_is_square);
    is_square(b, c_is_square);
    is_square(c, c_is_square);

    printf("%d is%s a square of any other integer.\n", a, c_is_square ? "" : " not");
    printf("%d is%s a square of any other integer.\n", b, c_is_square ? "" : " not");
    printf("%d is%s a square of any other integer.\n", c, c_is_square ? "" : " not");
    printf("\n");

    return 0;
}