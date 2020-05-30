// This is a programme to find smallest among 10 numbers
#include<stdio.h>

int main() {
	int A[10] , i , min= 0 ;
	printf( "Enter 10 numbers = " ) ;
	for ( i = 0 ; i <= 9 ; i++ ) {
		scanf("%d", &A[i] ) ;
	}
	min = A[0] ;
	for ( i = 0 ; i <= 9 ; i++ ) {
		if ( min > A[i] ) {
			min = A[i] ;
		}
	}
	printf(" The samllest numbers of these numbers is = %d " ,min ) ;
	return 0;
}
