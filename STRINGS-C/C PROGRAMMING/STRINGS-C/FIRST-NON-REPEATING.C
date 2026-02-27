#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i , j , count = 0 ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( str[i] != '#' && !isspace(str[i]) )
        {
            count = 1 ;
            for ( j = i+1 ; str[j] != '\0' ; j++ )
            {
                if ( str[i] == str[j] )
                {
                    count++ ;
                    str[j] = '#' ;
                }
            }
            if ( count == 1 )
            {
                printf("%c",str[i]);
                return 0 ;
            }
        }
    }
}