// This is a programme to calculate HCF of two numbers
#include<conio.h>
#include<stdio.h>
main()
{
    int A , B , HCF ;
    printf("Enter the value of A = ") ;
    scanf("%d",&A) ;
    printf("\nEnter the value of B = ") ;
    scanf("%d",&B) ;
    for( HCF = A<B ? A : B ; HCF >= 1 ; HCF-- )
    {
        if ( A%HCF == 0 && B%HCF == 0 )
            break ;
    }
    printf("\nThe HCF of A and B is = %d " , HCF) ;
    getch() ;
}
