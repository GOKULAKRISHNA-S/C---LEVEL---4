#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] ;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0' ;
    int len = strlen(str) , i , j = 0 ;
    char result[200] ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        result[j++] = str[i] ;
    }
    result[j] = '\0' ;
    printf("%s",result);
}