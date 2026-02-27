#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], temp;
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str), i, start = 0, end;
    for (int i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    for (i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;
            while (start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++ ;
                end-- ;
            }
            start = i+1 ;
        }
    }
    printf("%s", str);
}