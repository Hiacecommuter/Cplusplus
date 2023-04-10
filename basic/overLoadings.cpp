//C++ allows to specify more than one definition for a function name or an operator in the same scope
//overload resolution

//function overloading
//The definition of the overloaded functions must differ ny the types and/or the number of arguments in the argument list
//cannot overload fuction declarations that differ only by return type
class printData {
   public:
      void print(int i) {
        cout << "Printing int: " << i << endl;
      }
      void print(double  f) {
        cout << "Printing float: " << f << endl;
      }
      void print(char* c) {
        cout << "Printing character: " << c << endl;
      }
};
//operators overloading
//overloaded operators are functions with special names: the keyward "operator" followed by the
//symbol for the operator being defined. Like any other function, an overloaded operator has a reutrn
//type and a parameter list
Box operator+(const Box&);
      Box operator+(const Box& b) {
         Box box;
         box.length = this->length + b.length;
         box.breadth = this->breadth + b.breadth;
         box.height = this->height + b.height;
         return box;
      }
//https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm
