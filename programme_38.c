// This is a programme to print N febonacci numbers
#include<conio.h>
#include<stdio.h>
main()
{
    int N , i , r=-1 , s=1 , t ;
    printf("Enter a natural number = ") ;
    scanf("%d",&N) ;
    printf("The %d Febonacci numbers are = " ,N) ;
    for ( i=1 ; i<= N ; i++ )
    {
        t = r+s ;
        printf("%d  ",t) ;
        r = s ;
        s = t ;
    }
    getch() ;
}
