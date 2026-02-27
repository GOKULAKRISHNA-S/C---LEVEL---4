#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    char target[100] , replacement[100] ;
    printf("Enter the word to be replaced: ") ;
    scanf("%s", target) ;
    printf("Enter the replacement word: ") ;
    scanf("%s", replacement) ;
    char word[100] ;
    int i = 0 , j = 0 ;
    while (1)
    {
        if ( str[i] != ' ' && str[i] != '\0' )
        {
            word[j++] = str[i] ;
        }
        else
        {
            if ( j > 0 )
            {
                word[j] = '\0' ;
                if ( strcmp(word,target) == 0 )
                {
                    printf("%s ", replacement) ;
                }
                else
                {
                    printf("%s ", word) ;
                }
                j = 0 ;
            }
        }
        if ( str[i] == '\0' )
        {
            break ;
        }
        i++ ;
    }
    return 0 ;
}