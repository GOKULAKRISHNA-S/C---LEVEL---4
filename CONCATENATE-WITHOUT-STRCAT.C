#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] ;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0' ;
    int len = strlen(str) , i ;
    char drk[100] ;
    fgets(drk,sizeof(drk),stdin);
    drk[strcspn(drk,"\n")] = '\0' ;
    str[len] = ' ' ;
    len++ ;
    for ( i = 0 ; drk[i] != '\0' ; i++ )
    {
        str[len++] = drk[i] ;
    }
    str[len] = '\0' ;
    printf("%s",str);
}