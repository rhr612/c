#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    while(1){
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is a even number\n",n);
    }
    else{
        printf("%d is a odd number\n",n);
    }
    }
    return 0;
}
