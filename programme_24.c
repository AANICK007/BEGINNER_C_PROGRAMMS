// This is a programme to print first N odd numbers
#include<conio.h>
#include<stdio.h>
main()
{
    int N , i ;
    printf("Enter any natural number = ") ;
    scanf("%d",&N) ;
    printf("\nThe first %d odd numbers are = ",N) ;
    for (i=1 ; i<=N ; i++ )
        printf("%d ",2*i-1) ;
    getch() ;
}

