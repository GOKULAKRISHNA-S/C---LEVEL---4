#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] ;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i , letter = 0 , digit = 0 , spl = 0 , upper = 0 , lower = 0 , vowel = 0 , consonent = 0 , space = 0 ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( isalpha(str[i]) )
        {
            letter++ ;
        }
        if ( isdigit(str[i]) )
        {
            digit++ ;
        }
        if ( ispunct(str[i]) )
        {
            spl++ ;
        }
        if ( isupper(str[i]) )
        {
            upper++ ;
        }
        if ( islower(str[i]) )
        {
            lower++ ;
        }
        if ( str[i] == ' ' )
        {
            space++ ;
        }
        char ch = str[i] ;
        if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
        {
            vowel++ ;
        }
        if (!( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ))
        {
            consonent++ ;
        }
    }
    int word = 0 ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( str[i] != ' ' && ( i==0 || str[i-1]==' ') )
        {
            word++ ;
        }
    }
    printf("%d",word);
}