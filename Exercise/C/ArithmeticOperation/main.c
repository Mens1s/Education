#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c;
    float x_first,x_second;
    printf("Please enter your value ax^2+bx+c :\n a: ");
    scanf("%d",&a);
    printf(" b: ");
    scanf("%d",&b);
    printf(" c: ");
    scanf("%d",&c);
    double delta = sqrt((b*b)-(4*a*c));
    x_first = (b*(-1)-delta)/(2*a);
    x_second = (b*(-1)+delta)/(2*a);
    printf("\nYour roots are : %.2f and %.2f",x_first,x_second);
    return 0;
}
