#include<conio.h>
#include<stdio.h>
main()
{
    int A , B , LCM ;
    printf("Enter the value of A = ") ;
    scanf("%d",&A) ;
    printf("\nEnter the value of B = ") ;
    scanf("%d",&B) ;
    for( LCM = A>B ? A : B ; LCM = A*B ; LCM++ )
    {
        if ( LCM%A == 0 && LCM%B == 0 )
            break ;
    }
    printf("\nThe LCM of A and B is = %d " , LCM) ;
    getch() ;
}
