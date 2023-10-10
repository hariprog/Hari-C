#include <stdio.h> 
int main()
{
    float days, years, weeks;
    scanf("%f",&days);
    years = days/365; 
    weeks = (days% 365)/7;
    printf("%f %f", years,weeks);
    return 0;
}

