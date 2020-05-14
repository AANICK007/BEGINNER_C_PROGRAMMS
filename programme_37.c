// This is a programme to print all armstrong numbers between two numbers
#include<conio.h>
#include<stdio.h>
main()
{
    int A , B , i , sum , k , u ;
    printf("Enter the first nummber = ") ;
    scanf("%d", &A ) ;
    printf("\nEnter the second number = ") ;
    scanf("%d", &B ) ;
    printf("\nThe armstrong numbers between these numbers are = ") ;
    for( i = A+1 ; i < B-1 ; i++ )
    {
        sum = 0 ;
        k = i ;

        while( k != 0 )
        {
            u = k%10 ;
            sum += u*u*u ;
            k = k/10 ;
        }

        if ( sum == i )
            printf("%d " , i ) ;
    }
    getch() ;
}
