#include<stdio.h>
void main(){
	char str[11],substr[11];
	int pos,nc,i,j;
	printf("enter string:");
	scanf("%s",str);
	fflush(stdin);
	printf("enter a start position and no of characters");
	scanf("%d%d", &pos,  &nc);
	fflush(stdin);
	j = pos-1;
	for(i = 0; i <nc; i++,j++)
	{
		substr[i] = str[j];
	}
	substr[i] = '\0';
	printf("\n substring is %s",substr);
	getch();
}
