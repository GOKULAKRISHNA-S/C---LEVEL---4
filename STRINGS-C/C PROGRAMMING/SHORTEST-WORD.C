#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] ;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char word[100] , shortest[100] ;
    int i = 0 , j = 0 , current = 0 , min = 1000 ;
    while (1) 
    {
        if ( str[i] != ' ' && str[i] != '\0' )
        {
            word[j++] = str[i] ;
            current++ ;
        }
        else
        {
            if ( current > 0 )
            {
                word[j] = '\0' ;
                if ( current < min )
                {
                    min = current ;
                    strcpy(shortest,word);
                }
            }
            current = 0 ;
            j = 0 ;
        }
        if ( str[i] == '\0' )
        {
            break ;
        }
        i++ ;
    }
    printf("%s",shortest);
}