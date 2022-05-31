#include <stdio.h>

/* 
    Self referential structures...

    Definition: Self referential structures are those structures in which one or more pointers points to the structure of the same type. 
 */

struct code{
    int i;
    char c;
    struct code *ptr;
};


int main(void){
    struct code var1;
    struct code var2;

    var1.i = 65;
    var1.c = 'A';
    var1.ptr = NULL;

    var2.i = 66;
    var2.c = 'B';
    var2.ptr = NULL;

    var1.ptr = &var2;
    printf("%d %c\n", var1.ptr->i, var1.ptr->c);
}