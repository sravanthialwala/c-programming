#include<stdio.h>
print(int num[5]){
	int i;
	for(i= 0; i < 5; i++)
	{
		printf("\n%d", num[i]);
	}
}
int main()
{
	int arr[5] = {2,3,4,5,6};
	print(arr);
	return 0;
}
