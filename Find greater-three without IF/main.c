#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x,y;

    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter Second number : ");
    scanf("%d",&b);
    printf("Enter Third number : ");
    scanf("%d",&c);
    x=a>b?a:b;
    y=x>c?x:c;

    printf("\n\nthe biggest number is %d\n \n",y);
}
