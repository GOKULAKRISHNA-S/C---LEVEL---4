#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100] , temp ; int i , start = 0 , end ;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len = strlen(str) ;
    for ( i = 0 ; i <= len ; i++ )
    {
        if ( str[i]==' ' || str[i]=='\0' )
        {
            end = i-1 ;
            while ( start < end )
            {
                temp = str[start] ;
                str[start] = str[end] ;
                str[end] = temp ;
                start++ ;
                end-- ;
            }
            start = i+1 ;
        }
    }
    printf("%s",str);
}