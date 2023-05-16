#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x[100],s,i,j,lrg1,lrg2;

    printf("Enter the sieze of array :  ");
    scanf("%d",&s);

    for(i=0; i<s; i++){
       printf("\n%d number element - ",i+1) ;
       scanf("%d",&x[i]);
    }

    if(x[0]>x[1]){
        lrg1=x[0];
        lrg2=x[1];
    }
    else{
        lrg1=x[1];
        lrg2=x[0];
    }

    for(j=2; j<s;j++){
        if(x[j]>lrg1){
            lrg2=lrg1;
            lrg1=x[j];
        }
        else if(x[2]>lrg2 && x[2] !=lrg1){
            lrg2=x[j];
        }
    }



    printf("2nd largest = %d\n",lrg2);
    return 0;
}
