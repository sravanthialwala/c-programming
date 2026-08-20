#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers");
	scanf("%d %d %d", &a, &b, &c);
	if(a >= b && a >= c)
	{
		printf("%d is the largest",a);
	}
	else if(b >= a && b >= c)
	{
		printf("%d is the largest",b);
	}
	else if(c >= b && c >= a)
	{
		printf("% is the largest",c);
	}
	else
	{
		printf("all are equal");
	}
	return 0;
}
