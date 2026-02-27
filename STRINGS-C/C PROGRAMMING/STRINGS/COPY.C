#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1,"\n")] = '\0';
    char str2[100];
    strcpy(str2, str1);
    printf("%s\n", str2);
}