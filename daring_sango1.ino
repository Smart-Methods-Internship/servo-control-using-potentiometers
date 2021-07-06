// C++ code
//
#include <Servo.h>

int pos = 0;

int pos1 = 0;

int pos2 = 0;

int pos3 = 0;

int pos4 = 0;

Servo servo_11;

Servo servo_10;

Servo servo_9;

Servo servo_8;

Servo servo_7;

void setup()
{
  servo_11.attach(11, 500, 2500);

  pinMode(A0, INPUT);
  servo_10.attach(10, 500, 2500);

  pinMode(A1, INPUT);
  servo_9.attach(9, 500, 2500);

  pinMode(A2, INPUT);
  servo_8.attach(8, 500, 2500);

  pinMode(A3, INPUT);
  servo_7.attach(7, 500, 2500);

  pinMode(A4, INPUT);
}

void loop()
{
  pos = 0;
  for (pos = 0; pos <= 90; pos += 1) {
    servo_11.write(pos);
    delay(20); // Wait for 20 millisecond(s)
  }
  for (pos = 90; pos <= 179; pos += 1) {
    servo_11.write(map(analogRead(A0), 0, 1023, 0, 90));
    delay(20); // Wait for 20 millisecond(s)
  }
  pos1 = 0;
  for (pos1 = 0; pos1 <= 90; pos1 += 1) {
    servo_10.write(pos1);
    delay(20); // Wait for 20 millisecond(s)
  }
  for (pos1 = 90; pos1 <= 179; pos1 += 1) {
    servo_10.write(map(analogRead(A1), 0, 1023, 90, 179));
    delay(20); // Wait for 20 millisecond(s)
  }
  pos2 = 0;
  for (pos2 = 0; pos2 <= 90; pos2 += 1) {
    servo_9.write(pos2);
    delay(20); // Wait for 20 millisecond(s)
  }
  for (pos = 90; pos <= 179; pos += 1) {
    servo_9.write(map(analogRead(A2), 0, 1023, 0, 90));
    delay(20); // Wait for 20 millisecond(s)
  }
  pos3 = 0;
  for (pos3 = 0; pos3 <= 90; pos3 += 1) {
    servo_8.write(pos3);
    delay(20); // Wait for 20 millisecond(s)
  }
  for (pos3 = 90; pos3 <= 0; pos3 += 1) {
    servo_8.write(map(analogRead(A3), 0, 1023, 0, 180));
    delay(20); // Wait for 20 millisecond(s)
  }
  pos4 = 0;
  for (pos4 = 0; pos4 <= 90; pos4 += 1) {
    servo_7.write(pos4);
    delay(20); // Wait for 20 millisecond(s)
  }
  for (pos = 90; pos >= 0; pos -= 1) {
    servo_11.write(analogRead(A4));
    delay(15); // Wait for 15 millisecond(s)
  }
}