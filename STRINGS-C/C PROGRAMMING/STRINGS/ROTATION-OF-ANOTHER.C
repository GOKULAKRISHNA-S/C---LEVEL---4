#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str1[100] , str2[100] , temp[200] ;
    fgets(str1,100,stdin);
    str1[strcspn(str1,"\n")]='\0' ;
    fgets(str2,100,stdin);
    str2[strcspn(str2,"\n")]='\0' ;
    strcpy(temp,str1);
    strcat(temp,str1);
    if ( strstr(temp,str2) != NULL )
    {
        printf("ROTATED");
        return 0 ;
    }
    else
    {
        printf("NOT ROTATED");
    }
}