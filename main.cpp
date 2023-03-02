#include <stdio.h>

// https://github.com/Arnuma/programm-tech_Zinyakov-N.V/tree/HomeWork_2.6

int main() {
    int day, month, year;
    
    printf("Enter your birthday date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);
    
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("Your birthday year is a leap year.");
    } else {
        printf("Your birth year is not a leap year.");
    }
    
    const char *zodiac[] = {"Monkey", "Rooster", "Dog", "Pig", "Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Sheep"};
    int animal = year % 12;
    printf("Your Chinese zodiac sign: %s.", zodiac[animal]);
    
    const char *astro[] = {"Capricorn", "Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius"};
    const int month_end[] = {20, 19, 20, 20, 21, 21, 22, 23, 23, 23, 22, 21};
    int astro_sign;
    if (day > month_end[month - 1]) {
        astro_sign = month;
    } else {
        astro_sign = month - 1;
    }
    printf("Your astrological sign: %s.\n", astro[astro_sign]);
    
    return 0;
}