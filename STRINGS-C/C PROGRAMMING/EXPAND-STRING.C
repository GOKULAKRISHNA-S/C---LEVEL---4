#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int i = 0;
    while (str[i] != '\0')
    {
        if (isalpha(str[i]))
        {
            char ch = str[i];
            int num = 0;
            i++;
            while (isdigit(str[i]))
            {
                num = num * 10 + ( str[i] - '0');
                i++;
            }
            for ( int j = 0; j < num ; j++)
            {
                printf("%c", ch);
            }
        }
    }
}