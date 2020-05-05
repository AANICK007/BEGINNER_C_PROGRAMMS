// Hii there !! this is a programme to find the area of a triangle using herons formula
// Heron's formula :
// Area of triangle = sqrt(s*(s-a)*(s-b)*(s-c))  where , s is the semi perimeter of the triangle
// s = ( a+b+c )/2
main()
{
    float a , b , c , s ;
    printf("The respective sides a , b and c of triangle =  ");
    scanf("%f/%f/%f", &a , &b , &c );
    s = ( a+b+c )/2 ;
    printf("The area of triangle with sides %0.1f , %0.1f and %0.1f is = %0.3f " , a , b , c , sqrt(s*(s-a)*(s-b)*(s-c)));
    getch();
}
