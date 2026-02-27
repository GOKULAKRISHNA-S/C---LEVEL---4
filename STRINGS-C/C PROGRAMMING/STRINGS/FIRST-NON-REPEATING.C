#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] ;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len = strlen(str) , i , j , count = 0 ;
    for ( i = 0 ; i < len ; i++ )
    {
        if ( str[i] != 1  && !isspace(str[i]) )
        {
        count = 1 ;
        for ( j = i+1 ; j < len ; j++ )
        {
            if ( str[i]==str[j] )
            {
                count++ ;
                str[j] = 1 ;
            }
        }
        if ( count == 1 )
        {
            printf("FIRST-NON-REPEATING-ELEMENT : %c",str[i]);
            return 0 ;
        }
        }
    }
}