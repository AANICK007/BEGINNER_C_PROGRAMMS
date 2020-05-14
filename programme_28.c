// This is a programme to print the power of numbers
#include<conio.h>
#include<stdio.h>
main()
{
    int N , i , k , product=1 ;
    printf("Enter any number = ") ;
    scanf("%d",&N) ;
    printf("Enter the power = ") ;
    scanf("%d",&k) ;
    for (i=1 ; i<=k ; i++ )
        product = product*N ;
    printf("The value of %d power %d is = %d ",N , k ,product ) ;
    getch() ;
}



