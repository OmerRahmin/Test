#include "date.h"
#include <stdio.h>

#include "myFunctions.h"


void printDate(const Date* pDate)
{
	printf("%d / %d / %d", pDate->day, pDate->month, pDate->year);
}
void getCorrectDate(Date* pDate)
{
	int day, month, year;
	while (1)
	{
		printf("Please enter date in the following pattern:\ndd mm yyyy\n");
		scanf_s("%d %d %d", &day, &month, &year);
		if (dateIsValid(day, month, year))
		{
			pDate->day = day;
			pDate->month = month;
			pDate->year = year;
			return;
		}
		printf("\nInvalid date lets try again\n");

	}
}
int dateIsValid(int day, int month, int year)
{
	int validty = numOnRange(year, MIN_YEAR, MAX_YEAR) && numOnRange(day, 1, daysInMonth(month));

	return validty;
}
int daysInMonth(int month)
{
	switch (month)
	{
	case 4: case 6:case 9:case 11:
		return 30;

	case 1: case 3: case 5:case 7:case 8: case 10:case 12:
		return 31;

	case 2:
		return 28;

	default:
		return 0;
		break;
	}
}
