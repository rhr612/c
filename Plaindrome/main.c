#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rem,temp,sum=0;
    scanf("%d",&n);
    temp=n;


    while(temp!=0){
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }

    printf("\n The reverse number is : %d", sum);

    if(sum==n){
        printf("\nThe number is plaindrome");
    }
    else{
        printf("\nThe number is not plaindrome");
    }
    return 0;
}
