#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[100],s,i,j,k,temp[100];
    printf("Enter the sieze of array :  ");
    scanf("%d",&s);

    for(i=0; i<s; i++){
       printf("\n%d number element - ",i+1) ;
       scanf("%d",&x[i]);
    }

    printf("After reverse -\n") ;

    for(j=s-1; j>=0; j--){
       printf("%d\n",x[j]) ;
    }



    return 0;
}
