#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] ;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0' ;
    char target , replace ;
    scanf("%c",&target) ;
    getchar() ;
    scanf("%c",&replace) ;
    getchar() ;
    int len = strlen(str) , i = 0 ;
    for ( i = len-1 ; i >= 0 ; i-- )
    {
        if ( str[i] == target )
        {
            str[i] = replace ;
            break ;
        }
    }
    printf("%s",str);
}