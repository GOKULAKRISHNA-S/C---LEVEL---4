#include<stdio.h>
#include<string.h>
int main () 
{
    int n , i ; 
    printf("ENTER TOTAL NO OF MEMBERS : ");
    scanf("%d",&n) ;
    getchar();
    char arr[n][100] ;
    for ( i = 0 ; i < n ; i++ )
    {
        printf("NAME OF MEMBER %d : ",i+1) ;
        fgets(arr[i],sizeof(arr[i]),stdin) ;
        arr[i][strcspn(arr[i] , "\n")] = '\0' ;
    }
    for ( i = 0 ; i < n ; i++ )
    {
        printf("LENGTH OF MEMBER %d : %d\n",i+1,strlen(arr[i])) ;
    }
}