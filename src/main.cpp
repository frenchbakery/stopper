
#include <kipr/motor/motor.h>
#include <kipr/create/create.h>
#include <kipr/time/time.h>
#include <stdlib.h>
#include <iostream>

int main()
{
    msleep(10);
    //char a;
    //std::cin >> a;

    // kill the process
    //system("PID=$(ps -ef | awk '$NF~\"run/main\" {print $2}') && echo \"${PID}\" && kill -INT \"${PID}\"");
    system("PID=$(pidof run/main) && echo \"${PID}\" && kill -INT \"${PID}\"");
    msleep(1000);
    create_connect();
    msleep(100);
    create_drive_direct(0, 0);
    alloff();
}
