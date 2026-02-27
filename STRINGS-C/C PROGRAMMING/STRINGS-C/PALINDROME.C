#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char result[100];
    strcpy(result,str);
    int i , len = strlen(str) ;
    for ( i = 0 ; i < len/2 ; i++ )
    {
        char temp = str[i];
        str[i] = str[len-i-1] ;
        str[len-i-1] = temp ;
    }
    if ( strcmp(result,str)==0 )
    {
        printf("PALINDROME");
        return 0 ;
    }
    else
    {
        printf("NOT A PALINDROME");
        return 0 ;
    }
}