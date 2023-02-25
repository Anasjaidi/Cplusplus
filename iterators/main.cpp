# include <iostream>

# include <vector>

template <class T>
class vector2 {
  public :
  T x;
  void log() {
    std::cout << x << std::endl;
  };
  class iter {

  }
};

int main(int argc, char const *argv[])
{
  std::vector<int> arr;
  // vector2<int> y;
  // y.x = 12;
  // y.log();
  // vector2<std::string> y2;
  // y2.x = "anas";
  // y2.log();
  arr.push_back(1);
  arr.push_back(2);
  arr.push_back(3);

  vector2<int>::iter t; 
  return 0;
}
