#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100]; int i , count = 0 ;
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    char character[10];
    fgets(character, 10, stdin);
    character[strcspn(character, "\n")] = '\0';
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        if ( str[i] == character[0] )
        {
            count++ ;
        }
    }
    printf("COUNT OF %s : %d",character,count);
}