#include<stdio.h>
#include<conio.h>
void main()
{
	int num, rem;
	printf("enter a number:");
	scanf("%d", &num);
	while(num != 0)
	{
		rem = num % 10;
		printf("%d", rem);
		num= num/10;
	}
	getch();
}
