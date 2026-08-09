#include<stdio.h>
swap(int *a, int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;
}
int main()
{
	int n1= 20;
	int n2=30;
	swap(&n1,&n2);
	printf("n1 = %d\n n2 = %d",n1,n2);
	return 0;
}

