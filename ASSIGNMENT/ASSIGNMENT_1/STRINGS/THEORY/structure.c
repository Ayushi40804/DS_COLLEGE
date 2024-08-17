#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
    int rollno;
    float marks;
} student;
int main()
{
    student s1;
    s1.rollno = 20;
    s1.marks = 90.0;
    printf("%d", s1.rollno);
    return 0;
}