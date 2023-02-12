# include <iostream>

/**
 * enums just a named values
*/
// enums by def 4 bytes
enum Dir : unsigned char{
  A = 9,
  B,
  C
};

int main(int argc, char const *argv[])
{
  std::cout << A << B << C << std::endl;
  return 0;
}