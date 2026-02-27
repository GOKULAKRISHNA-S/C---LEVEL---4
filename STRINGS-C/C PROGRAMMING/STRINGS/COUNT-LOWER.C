#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char str[500];
    int i, letters = 0;
    fgets(str, 500, stdin);
    str[strcspn(str, "\n")] = '\0';
    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            if (islower(str[i]))
            {
                letters++;
            }
        }
    }
    printf("NO OF LOWER LETTERS IN STRING : %d", letters);
}