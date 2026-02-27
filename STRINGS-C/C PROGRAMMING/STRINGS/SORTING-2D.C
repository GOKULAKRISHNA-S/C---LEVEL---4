#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    getchar();
    char str[n][100];
    for (i = 0; i < n; i++)
    {
        fgets(str[i], sizeof(str[i]), stdin);
        str[i][strcspn(str[i], "\n")] = '\0';
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                char temp[100];
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }
}