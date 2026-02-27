#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i , j = 0 ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( str[i] != ' ' )
        {
            str[j++] = str[i] ;
        }
    }
    str[j]='\0';
    printf("%s",str);   
}