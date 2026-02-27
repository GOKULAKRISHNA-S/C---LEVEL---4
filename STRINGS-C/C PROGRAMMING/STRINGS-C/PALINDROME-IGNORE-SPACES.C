#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] , drk[100] , result[100] , temp ;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len = strlen(str) , i , j = 0 ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( str[i] != ' ' )
        {
            drk[j++] = str[i] ;
        }
    }
    drk[j] = '\0' ;
    strcpy(result,drk);
    int nel = strlen(drk);
    for ( i = 0 ; i < nel/2 ; i++ )
    {
        temp = drk[i] ;
        drk[i] = drk[nel - i - 1];
        drk[nel-1-i] = temp ;
    }
    if ( strcmp(result,drk)==0 )
    {
        printf("PALINDROME");
    }
    else
    {
        printf("NOT A PALINDROME");
    }
}