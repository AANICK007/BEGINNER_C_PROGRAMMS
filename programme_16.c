// This is a programme to find out roots of quadratic equation
#include<conio.h>
#include<stdio.h>
main()
{
    int A , B , C , D ;
    float X , Y ;
    printf("THIS IS A PROGRAMME TO FIND ROOTS OF A QUADRATIC EQUATION ") ;
    printf("\nEnter the value of A = ") ;
    scanf("%d",&A) ;
    printf("\nEnter the value of B = ") ;
    scanf("%d",&B) ;
    printf("\nEnter the value of C = ") ;
    scanf("%d",&C) ;
    D = B*B - 4*A*C ;
    X = (-B + sqrt(D)) / (2*A)  ;
    Y = (-B - sqrt(D)) / (2*A)  ;
    if (D < 0 )
        printf("\nHEY YOU !!!!!!! FIRST CHECK THE VALUE OF DETERMINANT") ;
    else
    {
        printf("\nThe first root is %0.2f",X) ;
        printf("\nThe second root is %0.2f",Y) ;
    }
    getch() ;
}

