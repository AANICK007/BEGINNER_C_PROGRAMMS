// This is a programme to find prime numbers between two given numbers
#include<conio.h>
#include<stdio.h>
main()
{
    int A , B , i , j ;
    printf("Enter first number = ") ;
    scanf("%d",&A) ;
    printf("\nEnter second number = ") ;
    scanf("%d",&B) ;
    printf("\nThe prime numbers between these numbers are = ") ;
    for( i = (A<B ? A : B) + 1 ; i <= (A>B ? A : B) - 1 ; i++ )
    {
        for (j= 2 ; j<= i ; j++ )
        {
            if ( i%j == 0 )
                break ;
        }
        if ( j == i )
            printf("%d ",i) ;
    }
    getch() ;
}

