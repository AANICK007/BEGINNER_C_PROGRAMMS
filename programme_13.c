// This is a programme to check divisibility by 5
#include<conio.h>
#include<stdio.h>
main()
{
    int A ;
    printf("THIS IS A PROGRAMME TO CHECK DIVISIBILITY BY 5 \n") ;
    printf("\nEnter a number = ") ;
    scanf("%d",&A) ;
    if(A%5 == 0)
    {
        printf("\nThe given number  is divisible by 5 ") ;
    }
    else
    {
        printf("\nThe given number isn't divisible by 5") ;
    }
    getch() ;
}

