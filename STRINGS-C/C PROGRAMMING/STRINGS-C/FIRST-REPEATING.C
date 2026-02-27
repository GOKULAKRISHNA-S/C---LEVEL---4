#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i , j ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        for ( j = i+1 ; str[j] != '\0' ; j++ )
        {
            if ( str[i]==str[j] )
            {
                printf("%c",str[i]);
                return 0 ;
            }
        } 
    }
    printf("NO REPEATING ELEMENT");
    return 0 ;
}