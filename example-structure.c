#include <stdio.h>


struct Date
{
    int day;
    int month;
    int year;
};

int dayInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void){
    struct Date start;
    scanf("%d %d %d", &start.day, &start.month, &start.year);
    struct Date nextDate = start;
    if(nextDate.day != dayInMonths[nextDate.month-1]){
        nextDate.day++;
    }
    else if (nextDate.month != 12){
        nextDate.day = 1;
        nextDate.month++;
    }
    else
    {
        nextDate.day = 1;
        nextDate.month = 1;
        nextDate.year++;
    }

    printf("Next Date: %d-%d-%d\n",nextDate.day,nextDate.month,nextDate.year);
}
