# include <iostream>

struct staticClass
{
  static int x, y;
};
struct staticStruct
{
  int x, y;
  
};


int main(int argc, char const *argv[])
{
  staticStruct a = {1, 2};
  staticClass a1;
  a.x = 1;
  a.y = 2;
  return 0;
}