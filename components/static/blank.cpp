# include <iostream>


extern int s_var = 9;

static void fn() {}

int main(int argc, char const *argv[])
{
  std::cout << s_var ;
  return 0;
}