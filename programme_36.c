// This is a programme to check if a number is armstrong number or not
#include<conio.h>
#include<stdio.h>
main()
{
    int N , W , i , k , sum=0 ;
    printf("Enter a natural number = ") ;
    scanf("%d",&N) ;
    W = N ;
    for( i=0 ; W != 0 ; i++ )
    {
        k = W%10 ;
        sum = sum + k*k*k ;
        W = W/10 ;
    }
    if ( sum == N )
        printf("\nThe given number is an armstrong number ") ;
    else
        printf("\nThe given number is not an armstrong number ") ;
    getch() ;
}
