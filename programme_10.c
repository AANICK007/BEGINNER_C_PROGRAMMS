// Tis is a programme to swap to variables using third variable
#include<conio.h>
#include<stdio.h>
main()
{
    int A , B , C ;
    printf("Enter the value of A = ") ;
    scanf("%d",&A) ;
    printf("\nEnter the value of B = ") ;
    scanf("%d",&B) ;
    C = A ;
    A = B ;
    B = C ;
    printf("\nThe swapped values of A and B respectively are = %d and %d",A,B) ;
    getch() ;
}
