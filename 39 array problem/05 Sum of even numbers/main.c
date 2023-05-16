#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[100],s,i,rem,sum=0;
    printf("Enter the sieze of array :  ");
    scanf("%d",&s);

    for(i=0; i<s; i++){
       printf("\n%d number element - ",i+1) ;
       scanf("%d",&x[i]);
    }

    for(i=0;i<s;i++){
        rem=x[i]%2;
        if(rem == 0){
            sum=sum+x[i];
        }
    }

    printf("\nThe sum of even numbers %d ",sum) ;

    return 0;
}
