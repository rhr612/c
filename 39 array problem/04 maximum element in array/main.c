#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[100],s,i,j,max;
    printf("Enter the sieze of array :  ");
    scanf("%d",&s);

    for(i=0; i<s; i++){
       printf("\n%d number element - ",i+1) ;
       scanf("%d",&x[i]);
    }

    max=x[0];

    for(j=0; j<s; j++){
        if(x[j]>max){
            max=x[j];
        }
    }

    printf("The max elements is %d",max);

    return 0;
}
