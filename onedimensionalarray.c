#include<stdio.h>
char str,str1,*ptr;
void main()
{
	char str[13] = {"sravanthi"};
	char str1[] = {"magic"};
	printf("we are singing with %s",str);
	ptr = str;
	printf("\nwe are singing with %s", ptr);
	printf("\n %s voice is %s",str,str1);
	getch();
}
