#include <AFMotor.h>

AF_DCMotor motor(3);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  motor.setSpeed(200);
  motor.run(FORWARD);
  delay(2000);
  motor.run(RELEASE);
  delay(1000);
  motor.run(BACKWARD);
  delay(2000);
  motor.run(RELEASE);
  delay(1000);
}
