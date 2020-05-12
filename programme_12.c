// This is a programme to check even or odd without using modulo operator
#include<conio.h>
#include<stdio.h>
main()
{
    int A ;
    printf("Enter a number = ") ;
    scanf("%d",&A) ;
    if(A & 1)
        printf("\nThe given number is an odd number") ;
    else
        printf("\nThe given number is an even number") ;
    getch() ;
}


// Another way to do this without use of bitwise operator
/*
main()
{
    int A ;
    printf("Enter a number = ") ;
    scanf("%d",&A) ;
    if(A%2 * 2 ==0 )
        printf("Even number") ;
    else
        printf("Odd number") ;
    getch() ;
}
*/

