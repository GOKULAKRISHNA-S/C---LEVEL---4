#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100] , strr[100];
    int i;
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    strcpy(strr,str) ;
    for (i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }
    for (i = 0; strr[i] != '\0'; i++)
    {
        strr[i] = toupper(strr[i]);
    }
    printf("%s\n", str);
    printf("%s\n", strr);
}