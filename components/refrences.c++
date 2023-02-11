# include <iostream>

int main(int argc, char const *argv[])
{
  int a = 42;
  int &aa = a; // is not allocated is just alias for a
  std::cout << aa;
  return 0;
}