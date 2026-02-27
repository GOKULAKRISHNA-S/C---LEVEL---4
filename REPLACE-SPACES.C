#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] ;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( str[i] == ' ' )
        {
            str[i] = '-';
        }
    }
    printf("%s",str);
}