#include <iostream>
using namespace std;

class Box
{
  // private data
  double length;
  double height;
  double breadth;

  
public:
  static int objectCount;

  Box(double l = 2.0, double b = 2.0, double h = 2.0) {
    cout <<"Constructor called." << endl;
    length = l;
    breadth = b;
    height = h;
         
    // Increase every time object is created
    objectCount++;
  }
};

int Box::objectCount = 0;

int main()
{
  Box Box1(1.,1.,1.);
  Box Box2(1.,2.,3.);

  cout << "Total object: " << Box::objectCount << endl;

  return 0;
}

 
