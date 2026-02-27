#include<stdio.h>
#include<string.h>
int main ()
{
    int n , i ;
    printf("ENTER TOTAL NO OF MEMBERS : ") ;
    scanf("%d",&n) ;
    getchar() ;
    char students[n][100] ;
    for ( i=0 ; i<n ; i++ )
    {
        printf("NAME OF MEMBER %d : ",i+1) ;
        fgets(students[i],sizeof(students[i]),stdin) ;
        students[i][strcspn(students[i], "\n")] = '\0' ;
    }
    for ( i=0 ; i < n ; i++ )
    {
        printf("MEMBER %d : %s \n",i+1,students[i]) ;
    }
}
