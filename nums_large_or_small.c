#include<stdio.h>
void main()
{
	int x;
	printf("enter a number:");
	scanf("%d", &x);
	if(x > 0)
	{
		printf("given number is large");
	}
	else if(x < 0)
	{
		printf("given number is small");
	}
	else
	{
		printf("given number is zero");
	}
	getch();
}
