#include<stdio.h>
void main()
{
	char name[11];
	int i = 0;;
	printf("enter your name(in upper case upto 10 characters");
	gets(name);
	fflush(stdin);
	while(name[i] != '\0')
	{
		if(name[i] >= 'A' && name[i] <= 'Z')
		name[i] = name[i] + 32;
		i++;
			}
			printf("the converted string is %s", name);
			getch();
}
