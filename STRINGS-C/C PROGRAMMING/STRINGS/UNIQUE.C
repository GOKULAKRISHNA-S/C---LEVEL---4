#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int i, j, unique = 1;
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                unique = 0;
                break;
            }
        }
        if (unique == 0)
        break;
    }
    if (unique)
    {
        printf("IT IS A UNIQUE ELEMENT");
    }
    else
    {
        printf("IT IS NOT A UNIQUE ELEMENT");
    }
}