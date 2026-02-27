#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] ;
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int i , j , k  , len = strlen(str) ;
    for ( i = 0 ; i <len ; i++ )
    {
        for ( j = i+1 ; j < len ;)
        {
            if ( tolower(str[i]) == tolower(str[j]) )
            {
                for ( k = j ; k < len ; k++ )
                {
                    str[k] = str[k+1] ;
                }
                len-- ;
            }
            else
            {
                j++ ;
            }
        }
    }
    printf("%s", str);
}