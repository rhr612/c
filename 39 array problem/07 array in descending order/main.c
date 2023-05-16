#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[100],i,j,k,temp,s;
    printf("Define array sieze : ");
    scanf("%d",&s);

    for(i=0; i<s; i++){
        printf("\n%d number element - ", i+1);
        scanf("%d",&x[i]);
    }

    for(j=0; j<s; j++){

        for(k=0; k< s-1-j; k++){
            if(x[k]<x[k+1]){
                temp = x[k];
                x[k]=x[k+1];
                x[k+1]=temp;
            }
        }
    }

    for(int l=0; l<s; l++){
    printf("%d\n",x[l]);

    }



    return 0;
}
