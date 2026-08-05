#include<stdio.h>
void main()
{
	int arr[4][3] = {{5,4,3}, {5,6,7}, {3,4,5}, {5,8,0}};
	int i,j;
	for(i = 0; i < 4;i++)
	{
		for(j = 0; j < 3;j++)
		{
			printf("%d%d",arr[i][j]);
		}
		printf("\n");
	}
	getch();
	
}
