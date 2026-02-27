#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100] ;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( str[i] >= 'A' && str[i] <= 'Z' )
        str[i] = str[i] + 32 ;
    }
    printf("%s\n",str);
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( str[i] >= 'a' && str[i] <= 'z' )
        str[i] = str[i] - 32 ;
    }
    printf("%s",str);
}