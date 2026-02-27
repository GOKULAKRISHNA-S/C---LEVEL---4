#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[200], shortest[200];
    fgets(str, 200, stdin);
    str[strcspn(str, "\n")] = 0;
    char word[200] ;
    int i = 0 , j = 0, min = 1000, current = 0 ;
    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            word[j++] = str[i];
            current++;
        }
        else
        {
            if (current > 0)
            {
                word[j] = '\0';
                if (current < min)
                {
                    min = current;
                    strcpy(shortest, word);
                }
            }
            current = 0;
            j = 0;
        }
        if (str[i] == '\0')
        {
            break;
        }
        i++;
    }
    printf("%s", shortest);
}