#include<stdio.h>
char *err_msg[] = {"all's well","file not found","no insufficient memory","no write permission","no read permission"};
void main()
{
int i ;
for(i = 0; i < 5; i++)
{
	printf("error msg is %s\n",err_msg[i]);
	}
	getch();	
}
