#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] ;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i , count = 0 ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        count++ ;
    }
    printf("%d",count);
}