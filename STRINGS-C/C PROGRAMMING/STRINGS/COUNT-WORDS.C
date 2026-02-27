#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main ()
{
    char str[500] ; int i , words = 0 ;
    fgets(str,500,stdin);
    str[strcspn(str,"\n")]='\0';
    int len = strlen(str) ;
    char nonwords[] = " .,\n\t;?!" ;
    for ( i = 0 ; str[i] != '\0' ; i++ )
    {
        while ( i < len )
        {
            if(strchr(nonwords,str[i])!=NULL)
            {
                break;
            }
            i++ ;
        }
        words++ ;
        while( i < len )
        {
            if(strchr(nonwords,str[i])==NULL)
            {
                break;
            }
            i++ ;
        }
    }
    printf("TOTAL NO OF WORDS : %d",words);
}