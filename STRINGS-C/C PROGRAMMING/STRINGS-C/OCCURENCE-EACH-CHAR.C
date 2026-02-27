#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int total = 0 ;
    for ( int i = 0 ; str[i] != '\0' ; i++ )
    {
        int count = 1 ;
        if ( str[i] != '#' && !isspace(str[i]))
        {
            for ( int j = i+1 ; str[j] != '\0' ; j++ )
            {
                if ( str[i]==str[j] )
                {
                    count++ ;
                    str[j] = '#' ;
                }
            }
            printf("%c->%d\n",str[i],count);
        }
    }
}