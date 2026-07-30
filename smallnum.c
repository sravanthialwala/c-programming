#include<stdio.h>
#include<conio.h>
void main()
{
	int n1, n2, n3;
	printf("enter 3 numbers:");
	scanf("%d%d%d", &n1, &n2, &n3);
	if (n1 < n2 && n1 < n3)
	{
		printf("%d is smaller", n1);
	}
	else if(n2 < n1 && n2 < n3)
	{
		printf("%d is smaller", n2);
	}
	else if(n3 < n1 && n3 < n2)
	{
		printf("%d is smaller", n3);
	}
	else
	{
		printf("all the three numbers are equal");
	}
	getch();
}
