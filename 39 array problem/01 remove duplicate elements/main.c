#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[20],s,i,j,k;
    printf("Enter the sieze of array :  ");
    scanf("%d",&s);

    for(i=0; i<s; i++){
       printf("\n%d number element - ",i+1) ;
       scanf("%d",&x[i]);
    }


    for(i=0;i<s;i++){

        for(j=i+1;j<s;j++){

           if(x[i]==x[j]) {

                for(k=j;k<s;k++){

                    x[k]=x[k+1];
                    s--;
                    j--;

                }
           }
        }
    }

    for(i=0; i<s; i++){
       printf("\n%d",x[i]) ;
    }

    return 0;
}
