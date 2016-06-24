
// Rodolfo Diaz
/* Program: Lab 3 */

#include "ccc_win.h"

// Project: lab3

class Chutist
{
public:
  
  Chutist();  // Default constructor

  Chutist(Point loc);       // constructor where chutist always points up
  
  void display(int i) const;  // accessor function, displays chutist

  void move(int dx, int dy);  // mutator function, moves chutist

private:

  Point location; // location of chutist 

};

// default; 

Chutist::Chutist()
{
  location = Point(0,0);
}

// constructor of Chutist object at Point loc;

Chutist::Chutist(Point loc)
{
    location = loc;// code here  <---------------------
}

// accessor function: displays the chutist at location to the cwin

void Chutist::display(int i) const
{
// STICK FIGURE  
Point copy = location;
Circle head = (cwin.get_copy(),10);
Point t1 = (Point(450, cwin.get_copy()+50));
Point t2 = (Point(550, cwin.get_copy()+50));
Point t3 = (Point(500, cwin.get_copy()+100));

cwin << line(t1,t2);
cwin << line(t2,t3);
cwin << line(t3,t1);

//displays the chutist at the Point location.If i is negative the chute is closed. If i is positive, it is open.

}

int ccc_win_main()
{
  cwin.coord(0,1000,1000,0);

  int clock = 0; 
  int velocity = 0;
  int accelaration = 0; 
  int height= cwin.get_int("Enter Height "); // Change height to loc??
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
    
      if (secondstoopen <= clock) // Change secondstoopen to i ???
      {
        cwin << Circle(Point(500,height + 10),10);
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

