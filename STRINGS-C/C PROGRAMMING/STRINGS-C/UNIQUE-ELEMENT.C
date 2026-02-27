#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i , j , isUnique ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        isUnique = 1 ;
        for ( j = i + 1 ; str[j] != '\0' ; j++ )
        {
            if ( str[i] == str[j] )
            {
                isUnique = 0 ;
                break ;
            }
        }
        if ( isUnique == 0 )
        {
            break ;
        }
    }
    if ( isUnique )
    {
        printf("UNIQUE ELEMENT");
        return 0 ;
    }
    else
    {
        printf("NOT A UNIQUE ELEMENT");
        return 0 ;
    }
}