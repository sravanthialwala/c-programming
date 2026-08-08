#include<stdio.h>
void main(){
	char str[20],*ptr;
	int size = 0;
	printf("enter string:",str);
	gets(str);
	fflush(stdin);
	for(ptr = str;*ptr != '\0';ptr++)
	{
		size++;
	}
	printf("size is %d",size);
	getch();
}
