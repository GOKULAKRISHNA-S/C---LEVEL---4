#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    char drk[100];
    fgets(drk, 100, stdin);
    drk[strcspn(drk, "\n")] = '\0';
    int i, j, count = 0;
    int len = strlen(str), nel = strlen(drk);
    if (len != nel)
    {
        
        printf("NOT ANAGRAM");
        return 0;
    }
    if (len == nel)
    {
        for (i = 0; str[i] != '\0'; i++)
        {
            for (j = 0; drk[j] != '\0'; j++)
            {
                if (str[i] == drk[j])
                {
                    count++;
                    drk[j] = '*';
                    break;
                }
            }
        }
    }
    if ( len == count )
    {
        printf("ANAGRAM");
    }
    else
    {
        printf("NOT A ANAGRAM");
    }
}