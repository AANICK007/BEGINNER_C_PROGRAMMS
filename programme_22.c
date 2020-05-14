// This is a programme to print first N natural numbers in reverse order
#include<conio.h>
#include<stdio.h>
main()
{
    int N , i ;
    printf("Enter any natural number = ") ;
    scanf("%d",&N) ;
    printf("\nThe first %d natural numbers are = ",N) ;
    for (i=N ; i>=1 ; i-- )
        printf("%d ",i) ;
    getch() ;
}

