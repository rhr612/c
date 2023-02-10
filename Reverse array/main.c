
#include <stdio.h>
#include <stdlib.h>
int z=0;
int main() {
    int x;

    scanf("%d",&x);
    int *n = (int *)malloc(sizeof(int) * x); //Array name n,sieze x;

    for(z;z<x;z++){
       scanf("%d",&n[z]);
    }
    for(int r=x-1;r>=0;r--){
       printf("%d ",n[r]);
    }

    return 0;
}

