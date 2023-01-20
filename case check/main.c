#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;

    printf("Hello Rakib Hassan :\n");
    scanf("%c",&x);
   // printf("%c",x);

    if(x>='A' && x<='Z'){
        printf("You enter a UPPER-CASE character");
    }


    else if(x>='a' && x<='z'){
        printf("You enter a LOWER-CASE character");
    }

    else if(x>='1' && x<='9'){
        printf("You enter a NUMBER character");
    }

    else{
        printf("You enter a SYMBOL");
    }

    return 0;
}
