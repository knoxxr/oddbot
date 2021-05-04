#ifndef VOLUMN_H
#define VOLUMN_H

#define VOL_AXIS1 0
#define VOL_AXIS2 1
#define VOL_AXIS3 2
#define VOL_AXIS4 3
#define VOL_GRIPPER 4

class volumn
{
    void Initialize();
    int ReadAxis1();
    int ReadAxis2();
    int ReadAxis3();
    int ReadAxis4();
    int ReadGripper();
};

#endif