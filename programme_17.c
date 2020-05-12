// This is a programme to check if a year is leap year or not
#include<conio.h>
#include<stdio.h>
main()
{
    int L ;
    printf("Enter any year = ") ;
    scanf("%d",&L) ;
    if(L%4 == 0)
        printf("This is a LEAP year") ;
    else
        printf("This is not a LEAP year") ;
    getch() ;
}

