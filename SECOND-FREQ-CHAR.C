#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[200] ; int freq[256] = {0} ;
    fgets(str, 200, stdin) ;
    str[strcspn(str, "\n")] = 0;
    int i ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( !isspace(str[i]) )
        {
            freq[(unsigned char)str[i]]++ ;
        }
    }
    int max = 0 , secondmax = 0 ;
    for ( i = 0 ; i < 256 ; i++ )
    {
        if ( freq[i] > max )
        {
            secondmax = max ;
            max = freq[i] ;
        }
        else if ( freq[i] > secondmax && freq[i] < max )
        {
            secondmax = freq[i] ;
        }
    }
    int maxchar = 0 , secondmaxchar = 0 ;
    for ( i = 0 ; i < 256 ; i++ )
    {
        if ( freq[i] == max )
        {
            maxchar = i ;
        }
        else if ( freq[i] == secondmax )
        {
            secondmaxchar = i ;
        }
    }
    if ( secondmax == 0 )
    {
        printf("No second most frequent character\n") ;
    }
    else
    {
        printf("Second most frequent character: %c\n", secondmaxchar) ;
    }
    return 0 ;
}