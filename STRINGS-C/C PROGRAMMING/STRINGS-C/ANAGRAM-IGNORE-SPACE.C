#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] ;
    fgets(str,100,stdin) ;
    str[strcspn(str,"\n")]='\0';
    char drk[100] ;
    fgets(drk,100,stdin);
    drk[strcspn(drk,"\n")]='\0';
    int i , j = 0  , k = 0 ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( str[i] != ' ' )
        {
            str[j++] = str[i] ;
        }
    }
    str[j] = '\0' ;
    for ( i = 0 ; drk[i] != '\0' ; i++ )
    {
        if ( drk[i] != ' ' )
        {
            drk[k++] = drk[i] ;
        }
    }
    drk[k] = '\0' ;
    int len = strlen(str) , nel = strlen(drk) , count = 0 ;
    if ( len != nel )
    {
        printf("NOT A ANAGRAM");
        return 0 ;
    }
    if ( len == nel )
    {
        for ( i = 0 ; str[i] != '\0' ; i++ )
        {
            for ( j = 0 ; str[j] != '\0' ; j++ )
            {
                if ( str[i] == drk[j] )
                {
                    drk[j] = '*' ;
                    count++ ;
                    break ;
                }
            }
        }
    }
    if ( len == count )
    {
        printf("ANAGRAM");
        return 0 ;
    }
    else
    {
        printf("NOT A ANAGRAM");
        return 0 ;
    }
}