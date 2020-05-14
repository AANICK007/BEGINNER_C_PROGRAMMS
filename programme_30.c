// This is a programme to counnt the summ of digits of a number
#include<conio.h>
#include<stdio.h>
main()
{
    int N , K , sum=0 ;
    printf("Enter any number = ") ;
    scanf("%d",&N) ;
    while (N != 0 )
    {
        K = N%10 ;
        sum  = sum+K ;
        N = N/10 ;
    }
    printf("The sum of digits in the given number is = %d " ,sum ) ;
    getch() ;
}





