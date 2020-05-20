// This is a programme to find area of circle using functions
#include <stdio.h>

float Area (int) ;
int main(){
	int R ;
	float A ;
	printf("Enter the value of radius = ");
	scanf("%d", &R ) ;
	A = Area(R) ;
	printf("The area of circle with radius %d is = %0.2f ", R , A);
}
float Area(int r ){
	float area ;
	area = (float)3.14*r*r ; 
	return(area) ;
}