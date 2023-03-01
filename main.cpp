#include <stdio.h>

// https://github.com/Arnuma/programm-tech_Zinyakov-N.V/tree/HomeWork_2.4


main()
{
	int day;
	printf("Day? ");
	scanf("%i",&day);
	
	switch(day)
	{
	case 1:
		{
			printf("Monday");
		}
		break;
	case 2:
		{
			printf("Tuesday");
		}
		break;
	case 3:
		{
			printf("Wednesday");
		}
		break;
	case 4:
		{
			printf("Thursday");
		}
		break;
	case 5:
		{
			printf("Friday");
		}
		break;
	case 6:
		{
			printf("Saturday");
		}
		break;
	case 7:
		{
			printf("Sunday");
		}
		break;
	default:
		{
			printf("Error");
		}
	}
}