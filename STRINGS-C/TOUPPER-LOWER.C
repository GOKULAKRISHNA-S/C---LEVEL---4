#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] ;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        str[i] = tolower(str[i]);
        
    }
    printf("%s\n",str);
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        str[i] = toupper(str[i]);
        
    }
    printf("%s",str);
    
}