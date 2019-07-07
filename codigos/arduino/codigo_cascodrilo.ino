#include <Servo.h>
#include <SoftwareSerial.h>
SoftwareSerial BT(2,3);
Servo servo1;
Servo servo2;
int val;


void setup()
{
  BT.begin(9600);
  servo1.attach(10);
  servo2.attach(11);
  servo1.write(0);
  servo2.write(-90);

  //Declarar los pines para el motor 1
  pinMode(8, OUTPUT); //I1
  pinMode(9, OUTPUT); //I2

  //Declarar los pines para el motor 2
  pinMode(12, OUTPUT);  //I3
  pinMode(13, OUTPUT);  //I4

  delay(3000);

}

void loop()
{
  if (BT.available() >= 1)
  {
    val = BT.read();

    if (val == 'r')
    {
      motores(-250, 250);
    }
    else if (val == 'i')
    {
      motores(-250, -250);
    }
    else if (val == 's')
    {
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    }
    else if (val == 'a')
    {
      motores(250, -250);
    }
    else if (val == 'd')
    {
      Disparo();
    }
  }
}

void motores(float m1, float m2)
{
  //m1 y m2 son las velocidades del primer
  // y segundo motor, entre -255 y 255




  //Invertir el giro del motor 1 si es necesario
  if (m1 < 0)
  {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    m1 = -m1;
  }
  else
  {
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
  }


  //Invertir el giro del motor 2 si es necesario
  if (m2 < 0)
  {
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    m2 = -m2;
  }
  else
  {
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
  }

}

void Disparo()
{
  servo1.write(-90);
  delay(2000);
  servo2.write(0);
  delay(2000);
  servo1.write(0);
  delay(2000);
  servo2.write(-90);


}
