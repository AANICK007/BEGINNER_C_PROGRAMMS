// This is a programme to multiply two matrices
#include<stdio.h>

int main() {
	int A[3][3] , B[3][3] , C[3][3] , i , j , k , sum=0 ;
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
			sum = 0 ;
			for ( k = 0 ; k <= 2 ; k++ ) {
				sum += A[i][k] * B[k][j] ;
			}
			C[i][j] = sum ;
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
