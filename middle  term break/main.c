#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,x1,x2;
    double root;
    printf("Input a,b,c of quadratic quation -(aX^2 + bX +c)\n");
    scanf("%d",&a,&b,&c);
    root=sqrt((b*b)-(4*a*c));

    x1= (-b+root)/(2*a);
    x2= (-b-root)/(2*a);

    printf("The value of X1 =%d",x1);
    printf("\nThe value of X2 =%d",x2);
    return 0;
}
