#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);
    char drk[100];
    fgets(drk, sizeof(drk), stdin);
    drk[strcspn(drk, "\n")] = '\0';
    int nel = strlen(drk);
    int i;
    if (len != nel)
    {
        printf("NOT EQUAL");
        return 0;
    }
    int isEqual = 1 ;
    for (i = 0; i < len; i++)
    {
        if (str[i] != drk[i])
        {
            isEqual = 0;
            break;
        }
    }
    if (isEqual)
    {
        printf("EQUAL");
    }
    else
    {
        printf("NOT EQUAL");
    }
}