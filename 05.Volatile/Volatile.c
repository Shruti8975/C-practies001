
// volatile 
#include<stdio.h>
 //volatile int flag = 0; 
int main()
{
   int flag = 0;
   printf("flag = %d\n",flag);
   flag = 1;
   
   printf("flag = %d\n",flag);
   return 0 ;
}


#include<stdio.h>
volatile int flag = 0;
void interrupt_simulator()
{
    flag = 1;
}
int main()
{
    printf("Before = %d\n",flag);
    
    interrupt_simulator();
    printf("After = %d\n",flag);
    
    return 0;


}


// button example in ISR 
#include<stdio.h>
volatile int buttonPressd = 0;

void Button_ISR()
{
    buttonPressd = 1;
}
int main()
{
    printf("------waiting for the button ----------\n");
    
    Button_ISR();  /// suppose button is pressed 
    
    if(buttonPressd == 1)
    {
        printf("Button Pressed! \n ");
    }
    return 0;
    
}



