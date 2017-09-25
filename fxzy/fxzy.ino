#include <Servo.h>
#include<MsTimer2.h>
Servo myservo1;  // 定义舵机变量
Servo myservo2;
Servo myservo3;
Servo myservo4;
int button1=2;
int button2=3;
int button3=4;
int val1;
int val2;
int val3;
void ZD(){
    while(val1!=HIGH){
    myservo1.write(90);
    delay(100);
    myservo1.write(180);
    delay(100);
    myservo1.write(270);
    delay(100);
    myservo1.write(270);
    delay(100);
    myservo1.write(180);
    delay(100);
    myservo1.write(90);
    delay(100);
  }
  while(1){
      myservo1.write(90);
      delay(100);
      myservo1.write(180);
      delay(100);
    }
  }
void setup() {
    myservo1.attach(10); //定义舵机接口数字接口
    myservo2.attach(11);  
    myservo3.attach(12);  
    myservo4.attach(13);  
    myservo1.write(0);     //舵机至正位
    myservo2.write(90);
    myservo3.write(90);
    myservo4.write(90);
    pinMode(button1,INPUT);
    pinMode(button2,INPUT);
    pinMode(button3,INPUT);
    MsTimer2::set(50,ZD);
    MsTimer2::start();
}

void loop() {
  val1=digitalRead(button1);
  val2=digitalRead(button2);
  val3=digitalRead(button3);
  if(val1==HIGH){
      myservo2.write(180);
      delay(1000);
      myservo2.write(90);
    }
    if(val2==HIGH){
      myservo3.write(180);
      delay(1000);
      myservo3.write(90);
    }
    if(val3==HIGH){
      myservo3.write(180);
      delay(1000);
      myservo3.write(90);
    }
}
