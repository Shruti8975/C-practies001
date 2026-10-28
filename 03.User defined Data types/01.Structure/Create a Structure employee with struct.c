// Create a Structure employee with 
//1.name 
//2.employee id
//3.salary

#include<stdio.h>
struct employee {
    char name[50];
    char employee_id[10];
    int salary;
};
int main()
{
    printf("-------Employee details----------\n");
    struct employee s1 = {"shruti","CNST77",15000};
    
    printf("name = %s\n",s1.name);
    printf("employee_id = %s\n",s1.employee_id);
    printf("salary = %d\n",s1.salary);
    
    return 0;
} 