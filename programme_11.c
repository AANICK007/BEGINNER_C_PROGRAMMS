// Tis is a programme to swap to variables without using third variable
#include<conio.h>
#include<stdio.h>
main()
{
    int A , B ;
    printf("Enter the value of A = ") ;
    scanf("%d",&A) ;
    printf("\nEnter the value of B = ") ;
    scanf("%d",&B) ;
    A = A+B ;
    B = A-B ;
    A = A-B ;
    printf("\nThe swapped values of A and B respectively are = %d and %d",A,B) ;
    getch() ;
}

