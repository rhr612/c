#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;


    for(;;){
        printf("Input the mumber :   ");
        scanf("%d",&num);
        if (num>0){
            printf("\nThe number is positive");
            printf("\n");
            printf("\n");
        }

        else if(num<0){
            printf("\nThe number is negative");
            printf("\n");
            printf("\n");
        }
        else{
            printf("\nThe number is ZERO");
            printf("\n");
            printf("\n");
        }
    }

    return 0;
}
