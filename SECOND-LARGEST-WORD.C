#include <stdio.h>
#include <string.h>
int main()
{
    char str[100] , largest[100] , secondlargest[100] ;
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    char words[100];
    int i = 0, j = 0, count = 0;
    int max = 0 , secondmax = 0 ;
    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            words[j++] = str[i];
        }
        else
        {
            if (j > 0)
            {
                words[j] = '\0';
                if ( j > max )
                {
                    
                    secondmax = max ;
                    strcpy(secondlargest, largest) ;
                    max = j ;
                    strcpy(largest, words) ;
                }
                else if ( j > secondmax && j < max )
                {
                    secondmax = j ;
                    strcpy(secondlargest, words) ;
                }
                j = 0;
            }
            if (str[i] == '\0')
            {
                break;
            }
        }
        i++ ;
    }
    if (secondmax == 0)
    {
        printf("No second largest word\n") ;
    }
    else
    {
        printf("Second largest word: %s\n", secondlargest) ;
    }
    printf("largest word: %s\n", largest) ;
    return 0;
}