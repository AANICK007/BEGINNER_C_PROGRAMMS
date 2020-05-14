// This is a programme to reverse the digits of a number
#include<conio.h>
#include<stdio.h>
main()
{
    int N , K , sum=0 ;
    printf("Enter any number = ") ;
    scanf("%d",&N) ;
    printf("The reverse of the given number is = ") ;
    while (N != 0 )
    {
        K = N%10 ;
        N = N/10 ;
        printf("%d", K) ;
    }
    getch() ;
}





