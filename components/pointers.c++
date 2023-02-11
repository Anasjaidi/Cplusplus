# include <iostream>


int main(int argc, char const *argv[])
{
  char* str = new char[100];
  memset(str, 65, 100);
  int a = 42;
  int*  ptr = &a;
  std::cout << *ptr << std::endl;
  std::cout << str << std::endl;
  return 0;
}
