#include<stdio.h>

int main()
{

    int totalDays, weeks, years, days;

    printf("Enter the days : ");
    scanf("%d", &totalDays);

    years = (totalDays / 365);
    weeks = (totalDays % 365)/7;
    days = totalDays - ((years * 365) + (weeks * 7));

    printf("days : %d\n",days);
    printf("weeks : %d\n",weeks);
    printf("years : %d\n",years);


    return 0;

}
