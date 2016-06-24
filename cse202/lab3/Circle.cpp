#include "ccc_win.h"

int ccc_win_main()
{
  cwin.coord(0,1000,1000,0);

  int clock = 0; 
  int velocity = 0;
  int accelaration = 0; 
  int height= cwin.get_int("Enter Height "); 
  int secondstoopen = cwin.get_int("Enter Seconds "); 
  
  while (height > 0)
    {
      clock++;
      accelaration+= 32;
      velocity+= accelaration;

    if (velocity > 174)
     {
      velocity = 174;
     }
    
      if (secondstoopen <= clock)
      {
        cwin << Circle(Point(500,height + 10),5);
        velocity = -100;
        if  (velocity < 17)
        {
          velocity = 17;
        }
     }
     height -= velocity;
     Circle C1 = Circle(Point(500,height),10);
     cwin << C1;  
    
    }
 Message m = Message(Point(300,50), ("Congrats"));
 cwin << m;

}

