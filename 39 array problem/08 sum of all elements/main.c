#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[100],s,i,j,sum=0;
    printf("Enter the sieze of array :  ");
    scanf("%d",&s);

    for(i=0; i<s; i++){
       printf("\n%d number element - ",i+1) ;
       scanf("%d",&x[i]);
    }
    for(j=0; j<s; j++){
        sum=sum+x[j];
    }

    printf("Sum = %d",sum);

    return 0;
}
