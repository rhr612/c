
#include <stdio.h>
#include <stdlib.h>
int i=0,z=0;
//#define x
int main() {
    int x;

    scanf("%d",&x);
    int *n = (int *)malloc(sizeof(int) * x); //Array name n,sieze x;

    for(z;z<x;z++){
       scanf("%d",&n[z]);
    }
    for(i;i<x;i++){
       printf("%d\n",n[i]);
    }

    return 0;
}
