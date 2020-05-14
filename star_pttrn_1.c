// This is a programme to  print star pattern
/*    *****
      *****
      *****
      *****
*/
#include<conio.h>
#include<stdio.h>
main()
{
    int i , j ;
    for( i=1 ; i<=4 ; i++ )
    {
        for( j=1 ; j<=5 ; j++ )
        {
            printf("*") ;
        }
        printf("\n") ;
    }
    getch() ;
}
