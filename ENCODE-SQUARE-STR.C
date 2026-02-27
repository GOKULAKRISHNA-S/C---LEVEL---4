#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] ;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0' ;
    int  i , count , total = 0  ;
    printf("%s\n",str);
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        count = 1 ;
        if ( str[i] != '#' && !isspace(str[i]) )
        {
                if ( str[i] == str[i+1] )
                {
                    str[i+1] = '#' ;
                    count = 2 ;
                }
                else{
                    count = 1 ;
                }
                printf("%d",count) ;
                total = total + count ;
        }
    }
    printf("\n") ;
    printf("%d",total*total);
}