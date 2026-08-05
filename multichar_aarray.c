#include<stdio.h>
void main()
{
	char names[][40] = {"apple","mango","watermelon","banana"};
	int pos;
	printf("enter position number:");
	scanf("%d", &pos);
	fflush(stdin);
	if(pos>=1 && pos<=4)
	{
		printf("fruit name at %d is %s",pos,names[pos-1]);
	}
	else{
		printf("undeclared position");
	}
	getch();
}
