#include <iostream>
using namespace std

// a constructor in C++ is a special method that is automatically called when an object of a class is created
// Constructors have the same name as the class, and have no return type
// Constructor can write to const objects during their construction
// default constructor(no parameters) is used if no initializer is supplied
class Car {
  public:
  string brand;
  string model;
  int year;
  Car(string x, string y, int z){  
    brand = x;
    model = y;
    year = z;}
};
  
int main(){  
  Car carObj1("Toyota", "Corolla", 2000);
  return 0}
