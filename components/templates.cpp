# include <iostream>
# include <string>

template<typename T>
void Print(T obj) {
  std::cout << obj << std::endl;
}

int main()
{
  Print<float>(1.2f);
  Print<int>(1);
  Print<std::string>("anas");
  return 0;
}
