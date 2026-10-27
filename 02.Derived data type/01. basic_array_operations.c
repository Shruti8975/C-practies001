#include<stdio.h>
#include<stdlib.h>
int comp(const void *a , const void *b)
{
    return(*(int*)a - *(int*)b);
}

int main()
{
    int data[] = {2,3,1,8,6,7,9};
    int n = sizeof(data) / sizeof(data[0]);
    int min = data[0];
    int max = data[0];
    int sum = 0;
    
    for(int i = 0 ; i < n ; i++){
        printf("%d ",data[i] );        // printing the array 
        
        
    }
    
    for(int i = 0 ; i < n ; i++){
        if(data[i] < min){
            min = data[i];          // finding minimum value 
        }
        if(data[i] > max){
            max = data[i];         // finding maximum value 
        }
    }
    printf("\n");
    printf("minimum number in Array %d\n",min);
    printf("maximum number in array %d\n", max);
    
    
    printf("Sorted array: ");
    qsort(data, n , sizeof(int), comp);
    for(int i = 0; i < n ; i++){
        printf("%d ",data[i]);     // sorting array using qsort function 
    }
    printf("\n");
    
    printf("%d\n",data[2]);  // finding Array using index value 
    
    
    for(int i = 0 ; i < n ; i++){
        sum += data[i];
        
    }
    printf("Addition of all elements %d ",sum);   // sum of all elements 
    
    
   
}