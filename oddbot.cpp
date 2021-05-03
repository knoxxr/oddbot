#include "oddbot.h"

oddbot::oddbot()
{

}

oddbot::~oddbot()
{
        
}

void oddbot::Initialize()
{        
        axis1.attach(PIN_AXIS1);
        axis2.attach(PIN_AXIS2);
        axis3.attach(PIN_AXIS3);
        axis4.attach(PIN_AXIS4);
        gripper.attach(PIN_GRIPPER);   
}

void oddbot::MoveAxis1(int pos)
{
        axis1.write(pos);
        delay(100);

}

void oddbot::MoveAxis2(int pos)
{
        axis2.write(pos);
        delay(100);
}

void oddbot::MoveAxis3(int pos)
{
        axis3.write(pos);
        delay(100);
}

void oddbot::MoveAxis4(int pos)
{
        axis4.write(pos);
        delay(100);
}

void  oddbot::MoveGripper(int pos)
{
        gripper.write(pos);        
        delay(100);
}