# include <fstream>
# include <iostream>
 # include <string>


int main(int argc, char const *argv[])
{
  std::ifstream file;
  file.open("./classVsStruct.c++");
   std::string line;
    while (getline(file, line)) {
        std::cout << line << std::endl;
    }
    file.close();
  return 0;
}