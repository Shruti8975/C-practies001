// Two dimentional array 
#include<stdio.h>
int main()
{
    int data[2][4]= {
        {3,5,2,1},
        {5,6,7,3},
    };
    int sum = 0;
    int max = data[0][0];
    int min = data[0][0];
    int n = sizeof(data) / sizeof(data[0]);
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            printf("%d ",data[i][j]);
        }
        printf("\n");
    }
    for(int i = 1 ; i < 2 ; i++){
        for(int j = 1 ; j < 4 ; j++){
            sum +=data [i][j];                      // sum of all elements in array 
            
        }
        printf("%d\n",sum);
    }
    
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            if(data[i][j] > max){
                max = data[i][j];
                
            }
            if(data[i][j] < min){
                min = data[i][j];
            }
        }
        
       
    } 
    
    printf("Maximun number in array : %d",max);
    printf("minimum number in array : %d",min);
    return 0;
}





