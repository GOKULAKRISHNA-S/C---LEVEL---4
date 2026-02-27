#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int i, j, len = strlen(str), count = 0;
    int total = 0;
    for (i = 0; i < len; i++)
    {
        count = 1;
        if (str[i] != '#' && !isspace(str[i]))
        {
            for (j = i + 1; j < len; j++)
            {
                if (str[i] == str[j])
                {
                    str[j] = '#';
                    count++;
                }
            }

            total = total + count;
            printf("%d", count);
        }
    }
    printf("\n");
    printf("%d\n", total);
    printf("%d",total*total);
}