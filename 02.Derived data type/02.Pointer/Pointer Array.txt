// 1. You can also use pointers to access arrays.
// printing value 
#include<stdio.h>
int main()
{
    int data[4] = {10,20,30,25};
    for(int i = 0 ; i < 4; i++){
        printf("%d\n",data[i]);
    }
    return 0;
    
}




//2.  printing memory adress of each elements 
#include<stdio.h>
int main()
{
    int data[4] = {10,20,30,40};
    for(int i = 0 ; i < 4 ; i++){
        printf("Adress = %p\n",data[i]);
        printf("elements = %d\n",data[i]);
    }
    return 0;
}
// output - it will print address of memory 


#include<stdio.h>
int main()
{
    int numbers[5] = {23,43,54,65,15};
    
    printf("%d\n",*numbers);
    printf("%d\n",*(numbers + 1));
    printf("%d\n",*(numbers + 2));
    printf("%d\n",*(numbers + 4));
    printf("%p\n",&numbers[0]);
    printf("%p\n",&numbers[1]);
    printf("%p\n",&numbers[2]);
    printf("%p\n",&numbers[3]);
    
    return 0;
}

// in array pointer if i want to access elements i need to give + 1 to access elements in array 
 
// using pointer we can modify the elements :

// changing the values of array using pointer 
#include<stdio.h>
int main()
{
    int arry[5] = {10,32,43,54,76};
    
    for(int i = 0; i < 5 ; i++){
        printf("%d\n",*(arry + i));                      // it will print the array 
        
    }
    
    *arry = 13 ;                                      // to change array using pointer we just need to give new number to arrray using *array_name = new elements ;
    printf("print the first arry : %d\n",*arry);    // change the first elements in the array 
    
    *(arry + 1) = 20;
    printf("print the second array : %d\n",*(arry + 1));   // change the second elements in the array 
    
    for(int i = 0 ; i < 5; i++){
        printf("%d  ",*(arry + i));                      // it will print updated array          
    }
    
    
    return 0 ;
    
}









