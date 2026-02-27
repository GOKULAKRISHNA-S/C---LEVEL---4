#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str[100] ;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char drk[100] ;
    fgets(drk,100,stdin);
    drk[strcspn(drk,"\n")]='\0';
    if (strcmp(str,drk)==0)
    {
        printf("EQUAL");
        return 0 ;
    }
    else
    {
        printf("NOT EQUAL");
        return 0 ;
    }
}