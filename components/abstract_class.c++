# include <iostream>


using namespace std;

class animal
{
  public:
  virtual void make_sound() {
    cout << "animal sound" << std::endl;
  }
};

class Dog : public animal {
public:
  virtual void make_sound() {
    cout << "dog sound" << std::endl;
  }
};

class Abs {
  public:
  virtual void foo() = 0;
};

class derivede: public Abs {
  virtual void foo() {

  }
};

int main(int argc, char const *argv[])
{
  animal *d = new Dog();
  d->make_sound();
  Abs *n = new derivede();
  return 0;
}
