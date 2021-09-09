
#define IN1 3  //定义IN1为3口
#define IN2 4  //定义IN2为4口
#define  ENA  10 //定义ENA为10口
void setup()
{  
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(ENA,OUTPUT);
}
void loop()
{   //正转速度为满速的 200/255
   digitalWrite(IN1,HIGH);  //控制电机正转
   digitalWrite(IN2,LOW);
   analogWrite(ENA,150);   //控制电机转速，迳我自己测试超过150电机才开始转

   delay(5000);
   digitalWrite(IN1,LOW);   //电机反转
   digitalWrite(IN2,HIGH);
   analogWrite(ENA,0);
    delay(500);

    digitalWrite(IN1,LOW); //控制电机停下
    digitalWrite(IN2,HIGH); 
    analogWrite(ENA,255); 
    delay(5000);
}
