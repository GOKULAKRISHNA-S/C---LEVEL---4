#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100] , result[100] , strr[100] , temp ;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i , j = 0 ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( str[i] != ' ')
        {
            strr[j++] = str[i];
        }
    }
    strr[j] = '\0' ;
    int len = strlen(strr) ;
    strcpy(result,strr);
    for ( int i = 0 ; i < len/2 ; i++ )
    {
        temp=result[i];
        result[i]=result[len-1-i];
        result[len-1-i]=temp;
    }
    if ( strcmp(strr,result)==0 )
    {
        printf("PALINDROME");
        return 0 ;
    }
    else 
    {
        printf("NOT A PALINDROME");
        return 0 ;
    }
}