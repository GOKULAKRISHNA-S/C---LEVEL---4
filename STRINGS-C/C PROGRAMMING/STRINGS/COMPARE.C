#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] ;
    fgets(str1,sizeof(str1),stdin) ;
    str1[strcspn(str1,"\n")]='\0' ;
    printf("%s\n",str1);
    char str2[50] ;
    fgets(str2,sizeof(str2),stdin) ;
    str2[strcspn(str2,"\n")]='\0' ;
    printf("%s\n",str2);
    if (strcmp(str1,str2)==0 )
    {
        printf("EQUAL") ;
    }
    else
    {
        printf("NOT EQUAL");
    }
}