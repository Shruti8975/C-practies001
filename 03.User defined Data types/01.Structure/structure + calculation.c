 // structure + calculation 
 #include<stdio.h>
 struct student{
    char name[50];
    float m1;
    float m2;
    float m3;
    
 };
 int main()
 {
    int m1 , m2 , m3;
    int sum = 0;
    struct student s1;
    printf("-----students marks calculation-----\n");
    
    printf("Enter your name : ");
    fgets(s1.name, sizeof(s1.name) , stdin);
    
    printf("Enter marks : ");
    scanf("%f",&s1.m1);
    
    printf("Enter math marks : ");
    scanf("%f",&s1.m2);
    
    printf("Enter bio marks : ");
    scanf("%f",&s1.m3);
    
    sum = s1.m1 + s1.m2 + s1.m3;
    printf("%f\n",sum);
    
    
    
 }



