#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10],s,i,p,v;
    printf("Enter the sieze of array :  ");
    scanf("%d",&s);

    for(i=0; i<s; i++){
       printf("\n%d number element - ",i+1) ;
       scanf("%d",&x[i]);
    }

    for(i=0; i<s; i++){
       printf("%d--",x[i]) ;
    }

    printf("\n\nEnter the position & value of element :  ");
    scanf("%d %d",&p, &v);

    for(i=s-1;i>=p-1;i--){
        x[i+1]=x[i];
    }
    x[p-1]=v;

    for(i=0; i<s+1; i++){
       printf("%d--",x[i]) ;
    }

    return 0;
}
