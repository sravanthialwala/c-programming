#include<stdio.h>
void main(){
	int n;
	printf("enter a number:");
	scanf("%d", &n);
	if(n %2 == 0){
		printf("even number is %d",n);
	}
	else{
		printf("odd number is %d",n);
	}
	getch();
}
