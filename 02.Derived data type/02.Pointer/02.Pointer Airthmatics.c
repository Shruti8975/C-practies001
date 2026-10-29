// Pointer Arithmetic
// Pointer arithmetic means changing the value of a pointer to make it point to a different element in memory.

// Like we saw on the previous page, array elements are stored next to each other in memory. So if a pointer points to one element, adding 1 moves it to the next one:
#include<stdio.h>
int main()
{
    int data[5] = {12,23,34,54,65};
    
    int *p = data;
    
    printf("%d\n",*(data));     // it will print first elements in array 12
    printf("%d\n",*(data + 4)); //65
    printf("%d\n",*(data + 2)); //34
    printf("%d\n",*(data + 3)); //54 
    printf("%d\n",*(data + 1));  // 23
    
    return 0;
    
    
}   
// Increment and Decrement
// You can move a pointer with ++ and -- (and with += / -=):

#include<stdio.h>
int main()
{
    int data[5] = {10,20,30,40,50};
    
    int *p = data;
    printf("%d\n",*(data));
    
    printf("%d\n",*p);
    p++;
    
    printf("%d\n",*p);
    p += 1;                   // 20
    
    // printf("%d\n",*p);
    // p += 2;                   // 30
    
    printf("%d\n",*p);
    p -= 2;
    
    printf("%d\n",*p);
    p -= 1;
    
    printf("%d\n",*p);
    p -= 3;
    
    
    return 0;
    
    
    
    
}





