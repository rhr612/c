#include <stdio.h>

int main()
{
    int input,days, years, weeks;
    printf("Input the nuber of days : ");
    scanf("%d",&input);
    years=input/365;
    weeks=(input%365)/7;
   /// days=500-year-week
    days=input-(years*365)-(weeks*7);


    printf("Year : %d\n",years);
    printf("Week : %d\n",weeks);
    printf("Day : %d",days);



    return 0;
}
