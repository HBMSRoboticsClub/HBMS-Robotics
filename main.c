#include <kipr/wombat.h>

int main()
{
    wait_for_light(0);
    enable_servos();
    set_servo_position(0, 1800);
    msleep(500);
    
	motor(1,-90);
    motor(0, 100);
    msleep(2250);
  
    motor(1,100);
    motor(0,100);
    msleep(500);
    
    motor(1,-100);
    motor(0, 110);
    msleep(500);
    
    motor(1, 100);
    motor(0, 110);
    msleep(285);
    
    motor(1,-100);
    motor(0, 110);
    msleep(8000);
 
    motor(1,-0);
    motor(0, 0);
    msleep(3000);
    
    enable_servos();
    set_servo_position(0, 850);
    msleep(500);
    
    motor(1, 20);
    motor(0, 20);
    msleep(6000);
    
    
    ao();
	return 0;
}
