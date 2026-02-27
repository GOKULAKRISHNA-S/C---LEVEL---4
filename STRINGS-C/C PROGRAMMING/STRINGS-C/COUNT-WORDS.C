#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int i , len = strlen(str) , word = 0 ;
    char nonwords[100] = " .,\n\t;:'!?";
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        while ( i < len )
        {
            if ( strchr(nonwords,str[i]) != NULL )
            {
                break;
            }
            i++ ;
        }
        word++ ;
        while ( i < len )
        {
            if ( strchr(nonwords,str[i]) == NULL )
            {
                break;
            }
            i++ ;
        }
    }
    printf("TOTAL NO OF WORDS : %d",word);
}