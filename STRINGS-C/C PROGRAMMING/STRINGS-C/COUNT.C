#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int digit = 0, letter = 0, vowel = 0, consonent = 0, upper = 0, lower = 0, spl = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            letter++;
        }
        if (isdigit(str[i]))
        {
            digit++;
        }
        if (isupper(str[i]))
        {
            upper++;
        }
        if (islower(str[i]))
        {
            lower++;
        }
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowel++;
        }
        if ( isalpha(str[i]))
        {
            if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
        {
            consonent++;
        }
        }
        if ( ispunct(str[i]))
        {
            spl++ ;
        }
    }
    printf("DIGITS : %d\n",digit);
    printf("LETTER : %d\n",letter);
    printf("VOWELS : %d\n",vowel);
    printf("CONSONENT : %d\n",consonent);
    printf("UPPER : %d\n",upper);
    printf("LOWER : %d\n",lower);
    printf("SPL CHAR : %d\n",spl);
}