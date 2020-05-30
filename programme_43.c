// This is a programme to add even and odd numbers 
#include<stdio.h>

int main() {
	int A[10] , sumo = 0 , sume = 0 , i ;
	printf("Enter 10 natural numbers = ") ;
	for( i = 0 ; i <= 9 ; i++ ) {
		scanf("%d",&A[i]) ;
	}
	for ( i = 0 ; i <= 9 ; i++ ) {
		if ( A[i] % 2 ) {
			sumo += A[i] ;
		}
		else {
			sume += A[i] ;
		}
	}
	printf( "The sum of even numbers = %d ", sume ) ;
	printf( "\nThe sum of odd numbers = %d " , sumo ) ;
	return 0 ;
}
