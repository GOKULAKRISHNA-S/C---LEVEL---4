#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] ;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int alphabet[26] = {0} , i ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( isalpha(str[i]) )
        {
            char ch = tolower(str[i]);
            int index = ch - 'a' ;
            alphabet[index] = 1 ;
        }
    }
    int isPangram = 1 ;
    for ( i = 0 ; i < 26 ; i++ )
    {
        if ( alphabet[i] == 0 )
        {
            isPangram = 0 ;
            break ; 
        }
    }
    if ( isPangram )
    {
        printf("Pangram");
    }
    else
    {
        printf("Not A Pangram");
    }
}