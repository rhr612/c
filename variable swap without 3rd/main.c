#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter variable a: ");
    scanf("%d", &a);
    printf("Enter variable b: ");
    scanf("%d", &b);
    //a=5; b=10
    //a=a+b=10+5=15
    //b=a-b=15-10=5

    a=a+b;
    b=a-b;
    a=a-b;

    printf ("\n");
    printf ("After swapping\n");
    printf("a = %d\n", a);
    printf("b = %d", b);

    return 0;
}
