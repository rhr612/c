#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter Second number : ");
    scanf("%d",&b);
    c=a>b?a:b;

    printf("\n\nthe biggest number is %d\n \n5",c);
}
