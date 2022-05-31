#include <stdio.h>
#include <stdbool.h>

struct Date
{
    int day;
    int month;
    int year;
};


// int getMonth(struct Date date){
//     return date.month;
// }

bool isFirstDay(struct Date date){
    return date.day == 1 && date.month == 1;
}


struct Date getFirstDay(int year){
    struct Date ans = {1, 1, year};
    return ans;
}

void printDate(struct Date date){
    printf("%d-%d-%d\n", date.day, date.month, date.year);
}

int main(void){
    // struct Date date = {1, 4, 2023};
    // // printf("%d\n", getMonth(date));
    // if(isFirstDay(date)){
    //     printf("Happy New Year\n");
    // }

    struct Date date = getFirstDay(2022);
    printDate(date);

    return 0;
}
