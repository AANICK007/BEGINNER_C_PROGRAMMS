// This is a programme to compare threee numbers
#include<conio.h>
#include<stdio.h>
main()
{
    int A , B , C ;
    printf("Enter the value of A = ") ;
    scanf("%d",&A) ;
    printf("\nEnter the value of B = ") ;
    scanf("%d",&B) ;
    printf("\nEnter the value of C = ") ;
    scanf("%d",&C) ;
    if (A > B)
    {
        if (A > C)
            printf("\nA is the largest number ") ;
        else
            printf("\nC is the largest number ") ;
    }
    else
    {
        if (B > C)
            printf("\nB is the largest number ") ;
        else
            printf("\nC is the largest number ") ;
    }
    getch() ;
}

