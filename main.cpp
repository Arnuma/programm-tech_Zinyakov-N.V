#include <stdio.h>
// https://github.com/Arnuma/programm-tech_Zinyakov-N.V/tree/HomeWork_2.3
main()
{
  int pin1, pin2;
  printf("pin1 =");
  scanf("%i", &pin1);
  printf("pin2 =");
  scanf("%i", &pin2);

  if ((pin1 == 1924) && (pin2 == 2419))
  {
    printf("OK!\n");
    printf("Конец 1 задания\n");
  }
  else
  {
    printf("Wrong!\n");
    printf("Конец 1 задания\n");
  }


  //задание №2

  printf("Задание №2\n");

    long long int log1 = 192418;
    long long int pass1 = 182419;
    long long int log2 = 241819;
    long long int pass2 = 181924;

    long long int userLogin, userPass;
    printf("input login: ");
    scanf("%i", &userLogin);
    printf("input pass: ");
    scanf("%i", &userPass);

    if ((userLogin == log1 && userPass== pass1) || (userLogin == log2 && userPass == pass2)) {
        printf("Ok");
    } else {
        printf("Error");
    }
}