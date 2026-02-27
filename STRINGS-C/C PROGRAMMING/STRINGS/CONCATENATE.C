#include<stdio.h>
#include<string.h>
int main () 
{
    char str1[50] ; 
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';
    char str2[50] ;
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]='\0';
    char str[250] ;
    strcat(str,str1);
    strcat(str," ");
    strcat(str,str2);
    printf("%s",str);
}