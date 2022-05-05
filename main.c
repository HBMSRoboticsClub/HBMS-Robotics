#include <kipr/wombat.h>

int main()
{

    	int ticks;
	ticks = 0;
    	printf("Follow the line\n");
        enable_servos();
	set_servo_position(0, 323);
    	msleep(500);
    
    	motor(1, -90);
   	motor(0, 100);
        msleep(1750);
    	while (ticks < 50000)
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
                	ticks += 50;
        	}
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
    
 	while (ticks < 48000)
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
                	ticks += 50;
        	}
    	}
    
   	motor(0, -100);
       	motor(1, 80);
        msleep(750);
    
        	
    	ao();
    	return 0;
}
