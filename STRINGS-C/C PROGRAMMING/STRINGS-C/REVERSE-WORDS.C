#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int start = 0 , end , i , len = strlen(str) ;
    for ( i = 0 ; i <= len ; i++ )
    {
        if ( str[i] == ' ' || str[i] == '\0' )
        {
            end = i-1 ;
            while ( start < end )
            {
                char temp = str[start];
                str[start]=str[end];
                str[end] = temp ;
                start++ ;
                end-- ;
            }
            start = i+1 ;
        }
    }
    printf("%s",str);
}