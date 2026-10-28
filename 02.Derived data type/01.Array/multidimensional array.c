// multidimensional array
#include<stdio.h>
int main()
{
    int data[2][3][5] =
    {
      {
        {2,4,5,6,8},
        {4,6,7,8,9},
        {5,1,2,8,9},
      },
        
      {
        {4,5,6,7,8},
        {6,2,1,3,4},
        {2,1,3,5,6},
      }
    
    };
    
    int n = sizeof(data) / sizeof(data[0]);
    int min = data[0][0][0];
    int max = data[0][0][0];
    
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            for(int k = 0 ; k < 5 ; k++){
               
                printf("%d  ",data[i][j][k]);   // priting all elements in the array 
                
            }
            printf("\n");
        }
        printf("\n");
    }
    
    
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            for(int k = 0; k < 5 ; k++){
                if(data[i][j][k] > max){
                    max = data[i][j][k];
                    
                }
                if(data[i][j][k] < min){
                    min = data[i][j][k];
                }
            }
        }
    }
    printf("Maximun elements in an array %d ",max);
    printf("minimum elements in the array %d ",min);
    return 0;
    
}

