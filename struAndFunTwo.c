#include <stdio.h>

/* 
    Passing structure variable as argument...
    Instead of passing structure members individually, it is a good practice to pass a structure variable as an argument.

    Unlike arrays, name of the structure variables are not pointers
 */

struct point
{
    /* data */
    int x;
    int y;
};

void print(struct point p){
    printf("%d %d\n", p.x, p.y);
}

int main(void){
    struct point p1 = {23, 45};
    struct point p2 = {56, 90};
    print(p1);
    print(p2);
    return 0;
}
