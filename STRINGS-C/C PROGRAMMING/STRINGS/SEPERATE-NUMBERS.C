#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[500] ;
    int i ;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if(isdigit(str[i]))
        {
           printf("%c",str[i]);
           if(!isdigit(str[i+1]))
            {
                printf("\n");
            }
        }
    }
}