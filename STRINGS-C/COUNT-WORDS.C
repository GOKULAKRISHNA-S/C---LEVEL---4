#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] ;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len = strlen(str) , count = 0 , i ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( str[i] != ' ' && ( i == 0 || str[i-1] == ' ' ) )
        {
            count++ ;
        }
    }
    printf("%d",count);
}