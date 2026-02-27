#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[500] ;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i , start = 0 , end , len = strlen(str) ;
    for ( i = 0 ; i <= len ; i++ )
    {
        if ( str[i] == ' ' || str[i] == '\0' )
        {
            end = i-1 ;
            while ( start < end )
            {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp ;
                start++ ;
                end-- ;
            }
            start = i+1 ;
        }
    }
    for ( i = 0 ; i < len/2 ; i++ )
    {
        char dark = str[i] ;
        str[i] = str[len - i - 1];
        str[len - 1 - i] = dark ;
    }
    printf("%s",str);
}