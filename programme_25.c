// This is a programme to print sum of first N natural numbers
#include<conio.h>
#include<stdio.h>
main()
{
    int N , i , sum=0 ;
    printf("Enter any natural number = ") ;
    scanf("%d",&N) ;
    for (i=1 ; i<=N ; i++ )
        sum = sum+i ;
    printf("The sum of first %d natural numbers is = %d ",N , sum ) ;
    getch() ;
}

