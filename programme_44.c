// This is a programme to find greatest of 10 numbers
#include<stdio.h>

int main() {
	int A[10] , i , max=0 ;
	printf( "Enter 10 numbers = ") ;
	for ( i = 0 ; i <= 9 ; i++ ) {
		scanf("%d", &A[i] ) ;
	}
	max = A[0] ;
	for ( i = 1 ; i <= 9 ; i++ ) {
		if ( max < A[i] ) {
			max = A[i] ;
		}
	}
	printf( "The greatest numbers among these numbers = %d", max ) ;
	return 0 ;
}
