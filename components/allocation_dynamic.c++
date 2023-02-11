# include <iostream>
# include <stdlib.h>
# include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int *x = new int;
  int *arr = (int*)new char[*x];
  *x = 42;
  cout << *x << endl; 
  delete x;
  delete[] arr;
  return 0;
}


int c_equivlant() {
  int *x = (int*)malloc(sizeof(int));
  int *arr = (int*)malloc(sizeof(int) * 10);
  *x = 42;
  cout << *x << endl; 
  free(x);
  free(arr);
  return 0;
}