#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] ;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0' ;
    char ch ;
    scanf("%c",&ch) ;
    int i  , count = 0 ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( str[i] == ch )
        {
            count++ ;
        }
    }
    printf("%d",count);
}