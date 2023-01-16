#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int l,st,sp;
    printf("How many row you want?\n");
    scanf("%d",&n);
    printf("\n");


    for(l=1; l<=n; l++){
        for(sp=1; sp<=n-l; sp++){
            printf(" ");
        }
        for(st=1; st<=l*2-1; st++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}


// n=5 line-

// 1|2|3| 4 |5|6|7|8|9

//---4---*             1
//     *|*|*           2
//   *|*|*|*|*         3  ----- 5star
//  |*|*|*|*|*|*|*     4
// *|*|*|*|*|*|*|*|*   5

// space:
//   1st line : n-line = 5-1= 4
//   2nd line : n-line = 5-2= 3
// star :
//   1st line : (line*2)-1 = 1*2-1= 2-1 = 1
//   3rd line : (line*2)-1 = 3*2-1= 6-1 = 5
//https://www.youtube.com/watch?v=_YeOERaD81M&t=314s


