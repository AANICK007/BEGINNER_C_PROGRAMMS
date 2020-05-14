// This is a programme to check if a number is prime or not
#include<conio.h>
#include<stdio.h>
main()
{
    int N , i ;
    printf("Enter a natural number = ") ;
    scanf("%d",&N) ;
    for( i=2 ; i<= N-1 ; i++ )
    {
        if( N%i ==0 )
            break ;
    }
    if(i == N)
        printf("\nThe given number is a prime number") ;
    else
        printf("\nThe given number is a composite number") ;
    getch() ;
}

