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
int csb;
int a;
int b;
void ZD(){
   if(a=0){
      if(csb=90){
        myservo1.write(csb);
        delay(100);
        csb=csb+90;
        b=0;
        }
      if(csb=180){
        myservo1.write(csb);
        delay(100);
          if(b=0){
            csb=csb+90;
          }
          if(b=1){
            csb=csb-90;
          }
        }
      if(csb=270){
        myservo1.write(csb);
        delay(100);
        csb=csb-90;
        b=1;
        }
      }
   if(a=1){
      if(csb=90){
        myservo1.write(csb);
        delay(100);
        csb=csb+90;
        }
      if(csb=180){
        myservo1.write(csb);
        delay(100);
        csb=csb-90;
        }
    }
  }
void setup() {
    a=0;
    csb=90;
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
      a=1;
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
