int data = 5;
void setup()
{
    Serial.begin(9600);            //Baud rate means speed between two devices 
                                   //Serial is a way for Arduino and Computer to communicate.
}
void loop()
{
    if(Serial.available()>0){     //Checks whether any data has arrived from the computer.
       data =  Serial.read();     //Reads one character from the serial buffer.
       Serial.println(data);      //Prints the value back to the Serial Monitor.
    }
}


//Serial is a communication method used to send and receive data between Arduino and another device (such as a computer).

// in c programming language we write like this  
#include<stdio.h>
int main()
{
    int data ;
    printf("Enter a number : ");
    scanf("%d",&data);
    
    printf("%d\n",data);
}

