#include <stdio.h>
#include <stdlib.h>
struct Employee{
    int emp_id;
    char name[50];
    char designation[50];
    float basic_salary;
    float hra;
    float da;
};
void display(struct Employee *emp, int n);
int main(){
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee *emp = (struct Employee *)malloc(n * sizeof(struct Employee));
    for (int i = 0; i < n; i++){
        printf("Enter the details of employee %d:\n", i + 1);
        printf("Emp-id: ");
        scanf("%d", &emp[i].emp_id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Designation: ");
        scanf("%s", emp[i].designation);
        printf("Basic Salary: ");
        scanf("%f", &emp[i].basic_salary);
        printf("HRA: ");
        scanf("%f", &emp[i].hra);
        printf("DA: ");
        scanf("%f", &emp[i].da);
    }
    display(emp, n);
    free(emp);
    return 0;
}
void display(struct Employee *emp, int n){
    for (int i = 0; i < n; i++){
        printf("Details of employee %d:\n", i + 1);
        printf("Emp-id: %d\n", emp[i].emp_id);
        printf("Name: %s\n", emp[i].name);
        printf("Designation: %s\n", emp[i].designation);
        printf("Basic Salary: %.2f\n", emp[i].basic_salary);
        printf("HRA: %.2f\n", emp[i].hra);
        printf("DA: %.2f\n", emp[i].da);
        float gross_salary = emp[i].basic_salary + emp[i].basic_salary * emp[i].hra / 100 + emp[i].basic_salary * emp[i].da / 100;
        printf("Gross Salary: %.2f\n", gross_salary);
    }
}