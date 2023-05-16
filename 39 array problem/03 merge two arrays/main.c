#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],b[20],s1,s2,i,j=0;
    printf("Enter the sieze of array1 :  ");
    scanf("%d",&s1);
    printf("\nEnter the sieze of array2 :  ");
    scanf("%d",&s2);
    int c[s1+s2];

    for(i=0; i<s1; i++){
       printf("\n%d number element for array 1 - ",i+1) ;
       scanf("%d",&a[i]);
    }
    for(i=0; i<s2; i++){
       printf("\n%d number element for array 2 - ",i+1) ;
       scanf("%d",&b[i]);
    }


    for (i=0;i<s1;i++){
        c[i]=a[i];
    }
    for (i=s1;i<s1+s2;i++){
        c[i]=b[j];
        j++;
    }
    for(i=0; i<s1+s2; i++){
       printf("\n%d",c[i]) ;
    }

    return 0;
}
