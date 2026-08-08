#include <stdio.h>
#include <conio.h>

void main()
{
    char str[100], *ptr, *lptr;

    printf("Enter string: ");
    gets(str);

    for(lptr = str; *lptr != '\0'; lptr++);

    lptr--;

    for(ptr = str; ptr <= lptr; ptr++, lptr--)
    {
        if(*ptr != *lptr)
        {
            break;
        }
    }

    if(ptr > lptr)
    {
        printf("%s is a palindrome", str);
    }
    else
    {
        printf("%s is not a palindrome", str);
    }

    getch();
}
