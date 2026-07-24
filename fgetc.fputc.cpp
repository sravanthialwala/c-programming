#include <stdio.h>
int main()
{
	FILE *ptr;
	ptr = fopen("sravanthi.txt","w");
	fputc('c',ptr);
	return 0;
}
