# include <iostream>


int main(int argc, char const *argv[])
{
  int i = -1;
  while (++i < 700)
  {
    std::cout << i % 7 << std::endl;
  }
  
  return 0;
}


