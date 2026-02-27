#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] ;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len = strlen(str);
    for ( int i = 0 ; i < len/2 ; i++ )
    {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp ;
    }
    printf("%s",str);
}