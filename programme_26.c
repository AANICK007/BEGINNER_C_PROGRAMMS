// This is a programme to print sum of first N natural numbers
#include<conio.h>
#include<stdio.h>
main()
{
    int N , i , product=1 ;
    printf("Enter any natural number = ") ;
    scanf("%d",&N) ;
    for (i=1 ; i<=N ; i++ )
        product = product*i ;
    printf("The of of first %d natural numbers is = %d ",N , product ) ;
    getch() ;
}

