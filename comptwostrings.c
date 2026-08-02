#include<stdio.h>
#include<string.h>
int main()
{
	char string1[100], string2[100];
	printf("enter string1:");
	scanf("%s", &string1);
	printf("enter string2:");
	scanf("%s", &string2);
	fflush(stdin);
		if(strcmp(string1, string2) > 0){
		printf("string1 is larger");
	}
	else if(strcmp(string1, string2) < 0)
	{
		printf("string2 is larger");
	}
	else
	{
		printf("both strings are equal");
	}
	return 0;
}
