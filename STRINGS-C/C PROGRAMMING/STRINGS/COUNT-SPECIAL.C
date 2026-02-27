#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main ()
{
    char str[500] ; int i , specials = 0 ;
    fgets(str,500,stdin);
    str[strcspn(str,"\n")]='\0';
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( ispunct(str[i]) )
        {
            specials++ ;
        }
    }
    printf("NO OF SPECIAL CHARACTERS IN STRING : %d",specials);
}