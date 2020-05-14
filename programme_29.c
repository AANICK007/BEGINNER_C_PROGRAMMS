// This is a programme to counnt the digits of a number
#include<conio.h>
#include<stdio.h>
main()
{
    int N , count=0 ;
    printf("Enter any number = ") ;
    scanf("%d",&N) ;
    while (N != 0 )
    {
        N = N/10 ;
        count++ ;
    }
    printf("The total numbers of digit in the given number is = %d " ,count ) ;
    getch() ;
}




