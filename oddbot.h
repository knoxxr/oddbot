#ifndef ODDBOT_H
#define ODDBOT_H

#include <arduino.h>
#include <Servo.h>

class oddbot
{
    private:

        int pinAxis1 =0;
        int pinAxis2 = 0;
        int pinAxis3 = 0;
        int pinGripper = 0;

        Servo myServo;

    public:
        oddbot();
        ~oddbot();

        void MoveAxis1(int pos);
        void MoveAxis2(int pos);
        void MoveAxis3(int pos);
        void MoveGripper(int pos);
};

#endif 