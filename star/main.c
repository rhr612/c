// Online C compiler to run C program online
#include <stdio.h>
int r;
int s;
int n;
int main() {
    // Write C code here
    printf("Hello Rakib Hassan :\n");
    scanf("%d",&n);
    //printf("%d", n);

    ///row
    for(r=1; r<n+1 ; r++){
        for (s=1; s<r+1; s++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
