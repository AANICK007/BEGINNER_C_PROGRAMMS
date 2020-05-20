// This is a programme to calculate factorial of a number using functions
#include<stdio.h>

int Fact ( int  ) ;
int main()
{
	int N , F  ;
	printf(" Enter a natural number =  " ) ;
	scanf("%d", &N) ;
	F = Fact( N ) ;
	printf(" The value of factorial of %d is %d ", N , F ) ;
	return 0 ;
}
	 
int Fact ( int n ) 
{
	int i , fact=1 ;
	for ( i=1 ; i<=n ; i++ )
	{
		fact = fact*i ;
	}
	return(fact) ;
}
