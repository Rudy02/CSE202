// Rodolfo Diaz
/* Program: HW 1 */

#include "ccc_win.h"

class Parachutist
{
public:
  Parachutist(); 
  Parachutist(Point loc);
  void display(int i) const;
  void move(int dx, int dy);

private:
  Point location; 
};

// default ----------------------------------------------------------

Parachutist::Parachutist()
{
  location = Point(0,0);
}

Parachutist::Parachutist(Point loc)
{
  location = loc; 
}

// accessor funtion: displays the parachutist at location to the cwin

void Parachutist::display(int i) const
{
  Point copy = location;
  Circle c = Circle(copy,15)
  
  Point t1 = Point(copy.get_x(), copy.get_y()-15); 
  Point t2 = Point(copy.get_x(), copy.get_y()-35);
  Point tm = Point(copy.get_x(), copy.get_y()-25);
  
  Point a1 = Point(copy.get_x()-15, copy.get_y()-20);
  Point a2 = Point(copy.get_x()+15, copy.get_y()-20);

  Point l1 = Point(copy.get_x()-15, copy.get_y()-40);
  Point l2 = Point(copy.get_x()+15, copy.get_y()-40);
  
  Line t = Line(t1,t2);
  Line arm1 = Line(a1,tm);
  Line arm2 = Line(a2,tm);
  Line leg1 = Line(l1,t2);
  Line leg2 = Line(l2,t2);

  cwin << c << t << arm1 << arm2 << leg1 << leg2;

  if (i>0)
  {
    Point m = Point(copy.get_x(), copy.get_y()+ 35);
    Point l = Point(copy.get_x(), copy.get_y()+ 15);
    Point r = Point(copy.get_x(), copy.get_y()+ 15);
    
    Line x = Line(l,m);
    Line y = Line(m,r);
    Line z = Line(r,l);

    cwin << c << t << arm1 << arm2 << leg1 << leg2 << x << y << z;
  }
}

// mutator function, moves chutist
void Parachutist::move(int dx, int dy)
{
  location.move(dx,dy);
}
// ------------------------------------------------------------------
int ccc_win_main()
{
  cwin.coord(0,1000,1000,0);
  int clock = 0;
  int velocity = 0;
  int accelaration = 0;
  int height = cwin.get_int("Enter Height ");
  int secondstoopen = cwin.get_int("Enter Seconds ");
  int planespeed = cwin.get_int("Enter Speed of Plane "); //
  Parachutist Dr(Point(500,height));
  
  while (height > 0)
  {
    clock++;
    accelaration+= 32;
    
    if (clock <= secondstoopen)
    { 
      velocity=+ accelaration;
    }
      if (velocity > 174)
      {
        velocity = 174;
      }
      else if (clock >= secondstoopen)
        {
          velocity -= 100;
          speed -= 60;
          if (planespeed < 0)
          {
            planespeed = 0;
          }
            if (velocity < 17)
            {
              velocity = 17;
            }
        }

    int before = height;
    height -= velocity;
    //Dr.display(clock - secondstoopen);
    //Dr.move(0. (height - before));    
    
    if (clock == 0, clock == 1)
    {
       Dr.display(clock - secondstoopen);
    }
      if ((clock % 3) == 0) //Displays Chutist each 3 sec. intervals
      {
      Dr.display(clock - secondstoopen); 
      }
    
    Dr.display(speed, height - before);
    if(height == 0)
    {
      Dr.display(clock - secondstoopen);
    }
  }
  
Message m = Message(Point(200,100), ("Parachutist landing velocity = " + velocity));
cwin << m;
}











