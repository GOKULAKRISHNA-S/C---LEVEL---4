#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] ;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len = strlen(str) ;
    for ( int i = 0 ; str[i] != '\0' ; i++ )
    {
        for ( int j = i+1 ; str[j] != '\0' ; j++ )
        {
            if ( str[i] > str[j] )
            {
                char temp = str[i] ;
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("%s\n",str);
}