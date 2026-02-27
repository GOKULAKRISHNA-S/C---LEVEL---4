#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int i , j , k , n ;
    n = strlen(str);
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = i ; j < n ; j++ )
        {
            for ( k = i ; k <= j ; k++ )
            {
                printf("%c",str[k]);
            }
            printf("\n");
        }
    }
}