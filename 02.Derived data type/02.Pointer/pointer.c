#include<stdio.h>
int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;
   
    printf("value of a = %d\n",a);
    printf("Address of a = %p\n",a);
    printf("value stored in that ptr = %p\n",ptr);
    printf("value of that ptr = %d\n",*ptr);
    
    return 0;
    
}  
#include<stdio.h>
int main()
{
    int a = 20;
    int *ptr;
     ptr = &a;
    
    printf("value of a = %d\n",a);
    printf("address of a = %p\n",a);
    printf("value stored in that ptr = %p/n",ptr);
    printf("value of that ptr = %d\n",*ptr);
    return 0;
}


// pointer is a variable that stores the memory address of another variable .
//& means: "Give me the address of this variable."

