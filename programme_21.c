// This is a programme to print first N natural numbers
#include<conio.h>
#include<stdio.h>
main()
{
    int N , i ;
    printf("Enter any natural number = ") ;
    scanf("%d",&N) ;
    printf("\nThe first %d natural numbers are = ",N) ;
    for (i=1 ; i<=N ; i++ )
        printf("%d ",i) ;
    getch() ;
}
