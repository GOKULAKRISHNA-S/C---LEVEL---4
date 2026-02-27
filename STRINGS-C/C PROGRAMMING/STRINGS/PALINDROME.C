#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100] , result[100] , temp ;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len = strlen(str);
    strcpy(result,str);
    for ( int i = 0 ; i < len/2 ; i++ )
    {
        temp=result[i];
        result[i]=result[len-1-i];
        result[len-1-i]=temp;
    }
    printf("%s\n",result);
    if ( strcmp(str,result)==0 )
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