# include <iostream>

class A
{
  private:
  int i = -1;

  public:
    void foo() const {
      std::cout << "foo";
    }
};


int main(int argc, char const *argv[])
{
  A *a = new A();
  a->foo();
  return 0;
}