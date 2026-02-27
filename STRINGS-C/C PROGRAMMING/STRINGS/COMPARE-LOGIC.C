#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100], drk[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    fgets(drk, 100, stdin);
    drk[strcspn(drk, "\n")] = '\0';
    int len1 = strlen(str), len2 = strlen(drk), i, j;
    if (len1 != len2)
    {
        printf("NOT EQUAL");
        return 0;
    }
    if (len1 == len2)
    {
        for (i = 0; i < len1; i++)
        {
            if (str[i] == drk[i])
            {
                printf("EQUAL ELEMENT");
                return 0;
            }
            else
            {
                printf("NOT A EQUAL ELEMENT");
                return 0 ;
            }
        }
    }
}