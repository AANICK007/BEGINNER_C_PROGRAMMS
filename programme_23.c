// This is a programme to print first N even numbers
#include<conio.h>
#include<stdio.h>
main()
{
    int N , i ;
    printf("Enter any natural number = ") ;
    scanf("%d",&N) ;
    printf("\nThe first %d even numbers are = ",N) ;
    for (i=0 ; i<=N-1 ; i++ )
        printf("%d ",i*2) ;
    getch() ;
}

