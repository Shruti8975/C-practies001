char data[] = " ";
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    if(Serial.avaialble()>0){
        data = Serial.readString();
        Serial.println(data);
    }
}
// it will take input from user and then print the string .
