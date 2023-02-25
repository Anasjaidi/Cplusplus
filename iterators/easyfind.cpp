# include <iostream>

# include <vector>

template<typename T>
int es(T cont, int oc) {
  typename T::iterator it = cont.begin(); // 0x12
  while (it != cont.end()) // it.oper!=(cont.end())
  {
    if (*it == oc) return oc; // it.op*() => int == oc
    it++; // it.op++(); {this.ptr++}
  }
  throw std::exception();
}

addNumber(dya.begin(), dun.end());

int main(int argc, char const *argv[])
{
  std::vector<int> dynamic_arr(12, 3);
  /**
   * {
   *    T* arr = new T[capacity]; // 0x12
   * }
  */

  dynamic_arr.push_back(1); // 0x12
  dynamic_arr.push_back(2); // 0x16
  dynamic_arr.push_back(3); // 0x20
  dynamic_arr.begin(); 
  /**
   * {
   * T* ptr = 0x12;
   * }
  */
  std::cout << es(dynamic_arr, 9) << std::endl; 
  return 0;
}
