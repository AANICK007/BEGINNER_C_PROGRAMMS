// This is a programme to calculate factorial using recursion
#include <stdio.h>

int Fact (int) ;
int main(){
	int N , F ;
	printf("Enter a natural number = ");
	scanf("%d",&N) ;
	F = Fact(N) ;
	printf("The factorial of %d is %d",N , F);
	return 0 ;
}

int Fact(int n){
	int fact=1 ;
	if (n>0)
	{
		fact = n*Fact(n-1) ;
	}
	else{
	    return 1 ;
	}
	return (fact) ;
}
