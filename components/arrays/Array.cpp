# include <iostream>

int main(int argc, char const *argv[])
{
  int arr[5];
  int* dyn = new int[100];
  int size = sizeof(arr) / sizeof(int);
  arr[0] = 0;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  return 0;
}