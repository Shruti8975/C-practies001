// Student details 

#include<stdio.h>

 struct student{
    char name[50] ;
    int Roll_number ;
    float marks ;
    char grade;
 };
 
int main()
{
    struct student s1;
    printf("Enter name : ");
    scanf("%s",s1.name);
    
    printf("Enter your roll number : ");
    scanf("%d",&s1.Roll_number);
    
    printf("Enter your marks : ");
    scanf("%f",&s1.marks);
    
    printf("Enter your grade : ");
    scanf(" %c",&s1.grade);
    
    
    printf("/n ----- student details -----/n");
    printf("name : %s\n",s1.name);
    printf("Roll number : %d\n",s1.Roll_number);
    printf("marks : %f\n",s1.marks);
    printf("grade : %c\n",s1.grade);
    
    return 0;
    
    
    
}
