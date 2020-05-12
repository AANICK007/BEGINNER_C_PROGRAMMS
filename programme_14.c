// This is a programme to check greater among two numbers
#include<conio.h>
#include<stdio.h>
main()
{
    int A , B ;
    printf("Enter the value of A = ") ;
    scanf("%d",&A) ;
    printf("\nEnter the value of B = ") ;
    scanf("%d",&B) ;
    if (A > B)
        printf("\nA is greater than B ") ;
    else
        printf("\nB is greater than A ") ;
    getch() ;
}
