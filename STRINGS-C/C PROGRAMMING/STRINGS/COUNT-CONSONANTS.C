#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char str[500];
    int i, consonents = 0;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for ( i = 0 ; str[i]!='\0' ; i++ )
    {
        char ch = tolower(str[i]) ;
        if ( isalpha(str[i]))
        {
            if ( !(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'))
            {
                consonents++ ;
            }
        }
    }
    printf("NO OF CONSONENTS : %d",consonents);
}