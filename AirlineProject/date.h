#pragma once
#define MIN_YEAR 1000
#define MAX_YEAR 2022

typedef struct
{
	int day;
	int month;
	int year;
}Date;

void getCorrectDate(Date* pDate);
void printDate(const Date* pDate);
int dateIsValid(int day, int month, int year);
int daysInMonth(int month);
