#include<stdio.h>
int main()
{
    int a , b , choice,
    choice1 = 1;
    
    do{
    printf("Enter your first number :" );
    scanf("%d",&a);
    
    printf("Enter your second number : ");
    scanf("%d",&b);
    
    printf("1.Addition of two number \n ");
    printf("2.substraction of two number \n");
    printf("3.multiplication of two number\n");
    printf("4.division of two number \n");
    scanf("%d",&choice);
    
    switch(choice){
        case 1 :
        printf("1.Adition of two number:%d",a +b);
        break ;
        
        case 2 : 
        printf("2.substraction of two number : %d", a - b);
        break;
        
        case 3 :
        printf("3.multiplication of two number : %d",a*b);
        break;
        
        case 4:
        printf("division of two number : %d",a/b);
        break;
        
      }
      
      printf("/");
    printf("If you want to continue then 1 = Y or 0 = N ");
    scanf("%d",&choice1);
    
    }while(choice1 == 1 ); 

} 
    
