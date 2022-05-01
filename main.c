#include <kipr/wombat.h>

int main()
{
    // Open Gate
    enable_servos();
    set_servo_position(0, 1800);
    msleep(500);
    
    // Goes Up To Line
    motor(1,-90);
    motor(0, 100);
    msleep(2750);
  
    // Turns To Be Directly On The Line
    motor(1,175);
    motor(0,100);
    msleep(700);
    
    // Moves Forward 
    motor(1,-98);
    motor(0, 110);
    msleep(2750);
    
    // Continues To Move Forward
    motor(1, -98);
    motor(0, 110);
    msleep(2000);
    
    // Finishes Its Move Forward   
    motor(1, -98);
    motor(0, 110);
    msleep(3100);
    
    // Stops For 1 Second
    motor(1,-0);
    motor(0, 0);
    msleep(1000);
    
    // Closes Gate
    enable_servos();
    set_servo_position(0, 943);
    msleep(500);
    
    // Turns Towards The Staring Box
    motor(1, 20);
    motor(0, 20);
    msleep(7000);
    
    // Moves Towards Staring Bpx
    motor(1, -100);
    motor(0, 110);
    msleep(6500);

    // Opens Gate    
    enable_servos();
    set_servo_position(0, 1800);
    msleep(500);
    
    // Backs Up
    motor(1, 100);
    motor(0, -110);
    msleep(6500);
    
    
    ao();
	return 0;
}
 
