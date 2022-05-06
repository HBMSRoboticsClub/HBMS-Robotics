#include <kipr/wombat.h>

int main()
	{
	
	wait_for_light(4);
    	shut_down_in(119);
    	int ticks;
	ticks = 0;
    	printf("Follow the line\n");
        enable_servos();
  	set_servo_position(0, 323);
    	msleep(500);
    
    	motor(1, -90);
   	motor(0, 100);
        msleep(2200);
    	while (ticks < 5400)
    	{
        	if (analog(0) > 3000)
        	{
            		motor(0, 100);
            		motor(1, -100);
                
        	}
        	else
        	{
            
            		motor(0, 100);
            		motor(1, 80);
               
        	}
                ticks += 1;
    	}
    
    	motor(0, 0);
       	motor(1, 0);
        msleep(1000);
    
    	enable_servos();
  	set_servo_position(0, 539);
    	msleep(500);
    
    	motor(0, 100);
       	motor(1, 80);
        msleep(1500);
    
    	ticks = 0;
        
    	while (ticks < 4300)
    	{
        	if (analog(0) > 3000)
        	{
            		motor(0, 100);
            		motor(1, -100);
                
        	}
        	else
        	{
            
            		motor(0, 100);
            		motor(1, 80);
               
        	}
           	ticks += 1;
    	}
    
   	motor(0, -100);
       	motor(1, -80);
        msleep(650);
    
    	motor(0, 100);
       	motor(1, -80);
        msleep(650);
    
    	enable_servos();
  	set_servo_position(0, 323);
    	msleep(500);
    
    	motor(0, -100);
       	motor(1, 80);
        msleep(1050);
    
        	
    	ao();
    	return 0;
}
