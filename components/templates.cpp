# include <iostream>
# include <string>

template<typename T>
void Print(T obj) {
  std::cout << obj << std::endl;
}

int main()
{
  Print(1.2f);
  Print(1);
  Print("anas");
  return 0;
}
