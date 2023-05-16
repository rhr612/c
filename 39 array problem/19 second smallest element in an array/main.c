#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x[100],s,i,j,sm1,sm2;

    printf("Enter the sieze of array :  ");
    scanf("%d",&s);

    for(i=0; i<s; i++){
       printf("\n%d number element - ",i+1) ;
       scanf("%d",&x[i]);
    }

    if(x[0]<x[1]){
        sm1=x[0];
        sm2=x[1];
    }
    else{
        sm1=x[1];
        sm2=x[0];
    }


    for(j=2; j<s; j++){

       if(x[j]<sm1){
        sm2=sm1;
        sm1=x[j];
       }

       else if(x[j]<sm2 && x[j]!=sm1){
        sm2=x[j];
        }
    }

    printf("2nd smallest = %d\n",sm2);
    return 0;
}
