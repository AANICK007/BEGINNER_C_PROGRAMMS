// This is a programme to print sum of first N natural numbers
#include<conio.h>
#include<stdio.h>
main()
{
    int N , i , fact=1 ;
    printf("Enter any natural number = ") ;
    scanf("%d",&N) ;
    for (i=1 ; i<=N ; i++ )
        fact = fact*i ;
    printf("The factorial of %d is = %d ",N , fact ) ;
    getch() ;
}


