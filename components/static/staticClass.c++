# include <iostream>

struct staticClass
{
  static int x, y; // this x, y are shared across all struct instances
};
struct staticStruct
{
  static int x, y;
  static void print() {
  cd   std::cout << x << ", " << y << std::endl;
  }
};
struct staticStruct1
{
   int x, y;

};
int staticStruct::x; // define the member for the linker 
int staticStruct::y;

int main(int argc, char const *argv[])
{
  staticStruct1 a = {1, 2};
  // staticStruct a = {1, 2}; // cannot do this because x, y are no struct mm=ember anymore
  staticStruct b;
  staticStruct::x = 1;
  staticStruct::y = 1;
  staticStruct::print();
  staticClass a1;
  // staticClass::x = 1; // connot do this approach because we need at least onr instance of this struct to store this values
  // staticClass::y = 2;
  return 0;
}