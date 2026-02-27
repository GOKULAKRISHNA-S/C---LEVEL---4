#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char drk[100];
    fgets(drk,100,stdin);
    drk[strcspn(drk,"\n")]='\0';
    int i , len = strlen(str) , nel = strlen(drk) , isEqual ;
    for ( i = 0 ; i < len ; i++ )
    {
        isEqual = 0 ;
        for ( int j = 0 ; j < nel ; j++ )
        {
            if ( str[i]==drk[j] )
            {
                isEqual = 1 ;
                break ;
            }
        }
    }
    if ( isEqual )
    {
        printf("SAME");
        return 0 ;
    }
    else{
        printf("NOT SAME");
        return 0 ;
    }
}