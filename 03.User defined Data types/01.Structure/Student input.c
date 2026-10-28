 // Student input 
 #include<stdio.h>
 #include<string.h>
 struct student{
    char name[100];
    int roll_n;
    float marks;
 };
 
 int main()
 {
    printf("-----Student input -------\n");
     
    struct student s1 ; 
    printf("Enter Student Name : ");
    fgets(s1.name, sizeof(s1.name), stdin );
    
    printf("Enter Student Roll_number: ");
    scanf("%d",&s1.roll_n);
    
    printf("Enter student marks: ");
    scanf("%f",&s1.marks);
    
    
    
    printf("-----------this all details of students---------\n");
    printf("name = %s\n",s1.name);
    printf("Roll_n = %d\n",s1.roll_n);
    printf("marks = %d\n",s1.marks);
    return 0;
    
 }


