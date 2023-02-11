# include <iostream>
/**
 * There is no diff except !
 * Class : is private by default
 * struct: is public by deafult
 * **/

/**
 * structs: are made only for compatibilite with c
 * but best use of them to store data (only struct of attrs)
*/
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
  void fn() {};
};


int main(int argc, char const *argv[])
{
  
  return 0;
}