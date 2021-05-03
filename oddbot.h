#ifndef ODDBOT_H
#define ODDBOT_H

#include <arduino.h>
#include <Servo.h>

#define PIN_AXIS1 5
#define PIN_AXIS2 6
#define PIN_AXIS3 9
#define PIN_AXIS4 10
#define PIN_GRIPPER 11

class oddbot
{
    private:

        int pinAxis1 =0;
        int pinAxis2 = 0;
        int pinAxis3 = 0;
        int pinAxis4 = 0;
        int pinGripper = 0;

        Servo axis1;
        Servo axis2;
        Servo axis3;
        Servo axis4;
        Servo gripper;

    public:
        oddbot();
        ~oddbot();

        void Initialize();
        void MoveAxis1(int pos);
        void MoveAxis2(int pos);
        void MoveAxis3(int pos);
        void MoveAxis4(int pos);
        void MoveGripper(int pos);
};

#endif 