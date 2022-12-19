#include <iostream>

int main(int argc, char *argv[]){
  std::cout << "Welcome to scaffold. It's not ready yet, though...." << std::endl;
  for (int i = 0; i < argc; i++){
    std::cout << argv[i] << "\n";
  }
}
