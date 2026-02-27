#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100];
    char largest[100];
    int i = 0 , j = 0 , current = 0 , max = 0 ;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    char word[500] ;
    while(1) 
    {
        if ( str[i] != ' ' && str[i] != '\0')
        {
            word[j++]=str[i] ;
            current++ ;
        }
        else{
            if ( current > 0 )
            {
                word[j]='\0' ;
                if ( current > max )
                {
                    max = current ;
                    strcpy(largest,word) ;
                }
            }
            current=0;
            j=0;
        }
        if (str[i]=='\0')
        {
            break;
        }
        i++ ;
    }
    int len = strlen(largest);
    printf("LARGEST : %s\n",largest);
    printf("LENGTH : %d",len);
    return 0 ;
}