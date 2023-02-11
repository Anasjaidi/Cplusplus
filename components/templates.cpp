# include <iostream>
# include <string>

template<typename T>
void Print(T obj) {
  std::cout << obj << std::endl;
}
template<typename T, int N>
class Array {
  private:
    T arr[N];
  public:
  T getN() {
    return N;
  }
};

int main()
{
  // Print<float>(1.2f);
  // Print(1);
  // Print<std::string>("anas");

  Array<int, 10> arr;
  std::cout << arr.getN() << std::endl;
  return 0;
}
