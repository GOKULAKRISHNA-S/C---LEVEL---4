#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100] , temp ;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len = strlen(str) ;
    for ( int i = 0 ; i < len/2 ; i++ )
    {
        temp = str[i] ;
        str[i] = str[len-1-i] ;
        str[len-1-i]=temp ;
    }
    printf("%s",str);
}