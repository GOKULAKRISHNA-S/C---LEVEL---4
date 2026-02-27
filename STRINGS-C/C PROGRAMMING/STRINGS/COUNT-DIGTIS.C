#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main ()
{
    char str[500] ; int i , digits = 0 ;
    fgets(str,500,stdin);
    str[strcspn(str,"\n")]='\0';
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( isdigit(str[i]))
        {
            digits++ ;
        }
    }
    printf("NO OF DIGITS IN STRING : %d",digits);
}