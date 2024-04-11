#include "myFunctions.h"
#include <string.h>
#include <stdlib.h>


int numOnRange(int num, int min, int max)
{
	return (num >= min && num <= max);
}

char* createDynStr(const char* msg)
{
	char* str;
	char temp[100];
	printf("Enter %s: ", msg);
	scanf("%99[^\n]", temp);

	str = (char*)malloc((strlen(temp) + 1) * sizeof(char));
	if (!str)
		return NULL;
	strcpy(str, temp);

	return str;
}

