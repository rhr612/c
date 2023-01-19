#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n1,n2,rem,GCD,LCM;
    printf("Enter two number :  ");
    scanf("%d %d", &a,&b);

    if(a>b){
        n1=a;
        n2=b;
    }
    else{
        n1=b;
        n2=a;
    }

    while(n2!=0){
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    GCD=n1;
    LCM=(a*b)/GCD;
    printf("GCD = %d\n",GCD);
    printf("GCD = %d\n",LCM);
    return 0;
}





//a=24
//b=60

//60%24 --->12
//24%12 --->00
//GCD= 12

//LCM= (a*b)/GCD
