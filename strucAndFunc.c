#include <stdio.h>

/* 
A structure is a user defined data type that can be used to group elements of different types into a single type.
 */

/* 
    Passing structure member as argument. -> Just like variables, We can pass structure members as argument to a function.
 */

struct student {
    char name[50];
    int age;
    int roll_no;
    float marks;
};

void print(char name[], int age, int roll, float marks){
    printf("%s %d %d %.2f", name, age, roll, marks);
}

int main(void){
    struct student s1 = {"Nick", 16, 50, 72.5};
    print(s1.name, s1.age, s1.roll_no, s1.marks);
    return 0;
}