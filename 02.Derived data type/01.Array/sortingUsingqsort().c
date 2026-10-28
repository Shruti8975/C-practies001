 #include<stdio.h>
 #include<stdlib.h>
 int comp(const void *a , const void *b){
    return (*(int*)a - (*(int*)b));
 }
 int main()
 {
     int data[] = {2,6,4,5,1,3};
     int n = sizeof(data) / sizeof(data[0]);
     printf("%d\n",data[2]);     // to print index value which we want 
     
     for(int i = 0 ; i < n ; i++){
         printf("%d",data[i]);
     }                          // printing all array elements
     
     printf("\n");
    // sorting the array 
    qsort(data , n , sizeof(int), comp);
    for(int i = 0 ; i < n ; i++){
        printf("%d ",data[i]);
    }
     
     
     return 0;
 }
