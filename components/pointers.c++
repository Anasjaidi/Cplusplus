# include <iostream>


int main(int argc, char const *argv[])
{
  int a = 42;
  int*  ptr = &a;
  std::cout << *ptr << std::endl;
  return 0;
}
