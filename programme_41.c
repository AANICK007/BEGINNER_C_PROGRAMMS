// This is a programme to find sum of squares of first N natural mumberbs
#include <stdio.h>

int SQR(int) ;
int main(){
	int N , S ;
	printf("Enter a natural number = ");
	scanf("%d",&N) ;
	S = SQR(N) ;
	printf("The sum of squares of first %d natural numbers = %d ", N,S);
	return 0 ; 
}
int SQR (int n){
	int sum=0 , i ;
	for ( i=0 ; i<=n ; i++ )
		sum += i*i ;
	return(sum) ;
}