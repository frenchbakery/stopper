
#include <kipr/motor/motor.h>
//#include <kipr/create/create.h>
#include <kipr/time/time.h>
#include <stdlib.h>
#include <iostream>

int main()
{
    std::cout << "Stopper: Activated, programm will be killed in 116 seconds" << std::endl;
    msleep(117000);
    //char a;
    //std::cin >> a;115

    // kill the process
    //system("PID=$(ps -ef | awk '$NF~\"run/main\" {print $2}') && echo \"${PID}\" && kill -INT \"${PID}\"");
    system("PID=$(pidof run/main) && echo \"Stopper: killing ${PID} now\" && kill -INT \"${PID}\"");
    msleep(1000);
    //create_connect();
    //msleep(100);
    //create_drive_direct(0, 0);
    alloff();
}
