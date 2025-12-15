#include <stdio.h>
struct data
{
    char name[100];
    int age;
    float gpa;
} d1;

int main()
{
    // Name: Sara, Age: 21, GPA: 3.75
    // Use fprintf() for writing formatted data..

     struct data d1={"sara",21,3.75};
    FILE *ptr = fopen("sara.txt", "w");
    fprintf(ptr," Name:%s, Age:%d, GPA:%.2f", d1.name, d1.age, d1.gpa);
    return 0;
}