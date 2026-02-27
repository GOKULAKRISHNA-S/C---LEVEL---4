#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[500] ;
    char words[500][500] ;
    fgets(str, 500, stdin) ;
    str[strcspn(str, "\n")] = '\0';
    int i = 0 , j = 0 , count = 0 ;
    while (1)
    {
        if ( str[i] != ' ' && str[i] != '\0' )
        {
            words[count][j++] = str[i] ;
        }
        else
        {
            if ( j > 0 )
            {
                words[count][j] = '\0' ;
                count++ ;
                j = 0 ;
            }
        }
        if ( str[i] == '\0' )
        {
            break ;
        }
        i++ ;
    } 
    for ( i = 0 ; i < count ; i++ )
    {
        for ( j = i+1 ; j < count ; j++ )
        {
            if ( strcmp(words[i], words[j]) > 0 )
            {
                char temp[500] ;
                strcpy(temp, words[i]) ;
                strcpy(words[i], words[j]) ;
                strcpy(words[j], temp) ;
            }
        }
    }
    for ( i = 0 ; i < count ; i++ )
    {
        printf("%s ", words[i]) ;
    }
}