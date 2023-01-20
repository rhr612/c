#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rem,temp,sum=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        rem= temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }

    printf("\n The reverse number is : %d", sum);
    return 0;
}




//n=589 ----->985

//589%10 = 9(a) ------------- 589/10= 58
//58% 10 = 8(b) ------------- 58/10 = 05
//5 % 10 = 5(c) -------------    0

//9,8,5 jog kora >>>>>
//sum=0;
//sum = sum*10+a=00+9=9;
//sum = sum*10+b=90+8=98;
//sum = sum*10+c=980+5=985;

