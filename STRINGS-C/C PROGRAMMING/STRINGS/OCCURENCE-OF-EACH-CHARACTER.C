#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int i, j ;
    for (i = 0; str[i] != '\0'; i++)
    {
        int count = 1;
        if (str[i] != 1 && !isspace(str[i]) )
        {
            for (j = i + 1; str[j] != '\0'; j++)
            {
                if (str[i] == str[j])
                {
                    count++;
                    str[j] = 1;
                }
            }
            printf("%c->%d\n", str[i], count);
        }
    }
}
