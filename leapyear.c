#include<stdio.h>
int main(){
	int year;
	year = 2026;
	if((year%4 == 0) && (year%100 != 0) && (year%400 == 0))
	{
		printf("the given year is a leap year");
	}
	else
	{
		printf("the given year is not a leap year");
	}
	return 0;
}
