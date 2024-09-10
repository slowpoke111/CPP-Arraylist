#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <string>

class DynamicArray{
  
  private:
    int maxSize;
    int* vals;
  
  public:
    int size;
    DynamicArray();
    ~DynamicArray();
    void addVal(int x);
    std::string print();
    int get(int x);
    
  
  
    
};

#endif //DYNAMICARRAY_H
