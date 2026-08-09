#include<Stdio.h>
int add(int a, int b);
int a,b;

int add(int a, int b)
{
printf("add function called\n");
return a+b;
}
void main()
{
	int r = add(5,4);
	printf("sum is %d",r);
	getch();
}


