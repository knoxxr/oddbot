#include "oddbot.h"

oddbot robot;

void setup()
{
    Serial.begin(9600);
    robot.Initialize();
}

void loop()
{
    switch(SerialRead())
    {
        case '1':
            robot.MoveAxis1(0);
        break;
        case 'q':
            robot.MoveAxis1(180);
        break;
        case '2':
            robot.MoveAxis2(0);
        break;
        case 'w':
            robot.MoveAxis2(180);
        break;
        case '3':
            robot.MoveAxis3(0);
        break;
        case 'e':
            robot.MoveAxis3(180);
        break;
        case '4':
            robot.MoveAxis4(0);
        break;
        case 'r':
            robot.MoveAxis4(180);
        break;
        case '5':
            robot.MoveGripper(0);
        break;
        case 't':
            robot.MoveGripper(180);
        break;
    }
    // robot.MoveAxis3(0);
    // delay(100);
    // robot.MoveAxis3(180);
    // delay(100);
}

char SerialRead()
{
    char data=' ';

    if(Serial.available())
    {
        data = Serial.read();

        Serial.print("ReadData:");
        Serial.println(data);
    }

    return data;
}