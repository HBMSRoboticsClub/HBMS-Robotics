#include <kipr/wombat.h>

int main()
{
    wait_for_light(1);
 	shut_down_in(119);
    enable_servos();
    set_servo_position(2, 0);
    set_servo_position(0, 1337);
    set_servo_position(1, 700);
    
    wait_for_milliseconds(10000);
    
    set_servo_position(2, 300);

    motor(0, 100);
    motor(1, 100);
    msleep(400);
    
    wait_for_milliseconds(1250);
    
    motor(0, 100);
    motor(1, -100);
    msleep(900);
    
    motor(0, -100);
    motor(1, 100);
    msleep(1000);
    
    motor(0, 100);
    motor(1, 100);
    msleep(2500);
    
    set_servo_position(2, 0);
    
    motor(0, 100);
    motor(1, -100);
    msleep(1000);
    
    motor(0, 100);
    motor(1, 100);
    msleep(1500);   
    return 0;
}
