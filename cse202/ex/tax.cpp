#include <iostream>
#include <cmath>

using namespace std;

class Times
{ public:
   
   Times();
    Times(int x);
   void read();
   void getX() const;

private:

   int newX;
};
//--------------------------------------------------------
Times::Times()
{
  int newX = 0;
}
Times::Times(int x)
{
  int newX = x;
  newX = newX *2;
}
void Times::read()
{
  int x;
  cout<< "Please enter a number: ";
  cin >> x;
}

void Times::getX() const
{
  
  cout << "The double is : " << newX << endl;
}

//-------------------------------------------------------
int main()
{
  Times num;

  num.read();
  
  num.getX();

  
}

  
