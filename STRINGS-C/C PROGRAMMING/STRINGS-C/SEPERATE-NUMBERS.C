#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] ;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int  i , j ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( isdigit(str[i]) )
        {
            printf("%c",str[i]);
            if( !isdigit(str[i+1]) )
            {
                printf("\n");
            }
        }
    }
}