#include<stdio.h>

struct Date
{
    /* data */
    int day;
    int month;
    int year;
};

// struct {
//     char *engine;
// } car1, car2;

int main(void)
{
    // car1.engine = "DDis 190 Engine";
    // car2.engine = "1.2 L Kappa Dual VTVT";
    // printf("%s\n", car1.engine);
    // printf("%s", car2.engine);

    struct Date today = {28, 5, 2022};

    // today = (struct Date) {1, 1, 2000};
    printf("%d-%d-%d\n", today.day, today.month, today.year);
}
