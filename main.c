#include <kipr/wombat.h>

int main()
{
    
    enable_servos();
    set_servo_position(0, 1800);
    msleep(500);
    
    motor(1,-90);
    motor(0, 100);
    msleep(2750);
  
    motor(1,175);
    motor(0,100);
    msleep(700);
    
    
 
    motor(1,-98);
    motor(0, 110);
    msleep(2750);
    
  
    motor(1, -98);
    motor(0, 110);
    msleep(2000);
    
 
    
    motor(1, -98);
    motor(0, 110);
    msleep(3100);
 
    motor(1,-0);
    motor(0, 0);
    msleep(1000);
    
    enable_servos();
    set_servo_position(0, 943);
    msleep(500);
    
    motor(1, 20);
    motor(0, 20);
    msleep(7000);
    
    motor(1, -100);
    motor(0, 110);
    msleep(6500);
    
    enable_servos();
    set_servo_position(0, 1800);
    msleep(500);
    
    motor(1, 100);
    motor(0, -110);
    msleep(6500);
    
    
    ao();
	return 0;
}
