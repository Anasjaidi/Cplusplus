# include <iostream>
/**
 * There is no diff except !
 * Class : is private by default
 * struct: is public by deafult
 * **/

class classVsStruct
{
  int b; // private
  public:
  int a; // public
};
struct classVsStruct
{
  int b; // public
  private:
  int a; // private
};


int main(int argc, char const *argv[])
{
  
  return 0;
}