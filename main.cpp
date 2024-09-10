// main.cpp

#include <iostream>
#include "DynamicArray.h"

int main() {

  DynamicArray myArray = DynamicArray();
  std::cout << std::endl;
  for(int i = 1; i <= 81; i++){
    myArray.addVal(i);
    std::cout << "Adding " << i << std::endl;
  }

  std::cout << "\nArray: " << std::endl;
  std::cout<<myArray.print();
  
}
