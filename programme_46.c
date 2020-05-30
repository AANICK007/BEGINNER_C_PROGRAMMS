// This is a programme to add two matrices
#include<stdio.h>

int main() {
	int A[3][3] , B[3][3] , C[3][3] , i , j ;
	printf("Enter the first matrix = ") ;
	for( i = 0 ; i <= 2 ; i++ ) {
		for ( j = 0 ; j <= 2 ; j++ ) {
			scanf("%d",&A[i][j] ) ;
		}
	}
	printf("The first matrix is = \n") ;
	for( i = 0 ; i <= 2 ; i++ ) {
		for ( j = 0 ; j <= 2 ; j++ ) {
			printf("%d ",A[i][j] ) ;
		}
		printf("\n") ;
	}
	
	printf("Enter the second matrix = ") ;
	for( i = 0 ; i <= 2 ; i++ ) {
		for ( j = 0 ; j <= 2 ; j++ ) {
			scanf("%d",&B[i][j] ) ;
		}
	}
	printf("The second matrix is = \n") ;
	for( i = 0 ; i <= 2 ; i++ ) {
		for ( j = 0 ; j <= 2 ; j++ ) {
			printf("%d ",B[i][j] ) ;
		}
		printf("\n") ;
	}
	
	for ( i = 0 ; i <= 2 ; i++ ) {
		for ( j = 0 ; j <= 2 ; j++ ) {
			C[i][j] = A[i][j] + B[i][j] ;
		}
	}
	printf("The sum of first and second matrix is = \n") ;
	for( i = 0 ; i <= 2 ; i++ ) {
		for ( j = 0 ; j <= 2 ; j++ ) {
			printf("%d ",C[i][j] ) ;
		}
		printf("\n") ;
	}
	return 0 ;
}
