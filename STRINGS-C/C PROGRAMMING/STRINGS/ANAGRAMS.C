#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    char str1[100] , str2[100] ;
    int i , j , count = 0 , len1 , len2 ;
    fgets(str1,100,stdin);
    str1[strcspn(str1,"\n")]='\0';
    fgets(str2,100,stdin);
    str2[strcspn(str2,"\n")]='\0';
    len1 = strlen(str1) ;
    len2 = strlen(str2) ;
    if ( len1 != len2 )
    {
        printf("NOT A ANAGRAM");
        return 0 ;
    }
    if ( len1 == len2 )
    {
        for ( i = 0 ; i < len1 ; i++ )
        {
            for ( j = 0 ; j < len2 ; j++ )
            {
                if ( str1[i]==str2[j])
                {
                    str2[j]='*';
                    count++ ;
                    break;
                }
            }
        }
    }
    if ( len1 == count )
    {
        printf("ANAGRAM");
        return 0 ;
    }
    else
    {
        printf("NOT A ANAGRAM");
        return 0 ;
    }
}