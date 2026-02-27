#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    char words[100][100];
    int i = 0, j = 0, count = 0;
    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            words[count][j++] = str[i];
        }
        else
        {
            if (j > 0)
            {
                words[count][j] = '\0';
                count++;
                j = 0;
            }
        }
        if (str[i] == '\0')
        {
            break;
        }
        i++;
    }
    int visited[100] = {0};
    int freq ;
    for ( i = 0 ; i < count ; i++ )
    {
        if (visited[i])
        {
            continue;
        }
        int freq = 1 ;
        for ( j = i+1 ; j < count ; j++ )
        {
            if (strcmp(words[i], words[j]) == 0)
            {
                visited[j] = 1;
                freq++ ;
            }
        }
        printf("%s : %d\n", words[i], freq);
    }

}