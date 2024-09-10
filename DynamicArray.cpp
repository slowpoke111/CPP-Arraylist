#include "DynamicArray.h"
#include <string>

DynamicArray::DynamicArray(){
  maxSize=16;
  vals = new int[maxSize];
  size=0;
}

DynamicArray::~DynamicArray(){
  delete[] vals;
  vals=nullptr;
}

std::string DynamicArray::print(){
  std::string x="";
  for (int i=0;i<size;i++){
     x+=std::to_string(*(vals+i));
  }
  return x;
}

void DynamicArray::addVal(int x){
  if (maxSize<size+1){
    int* vals2 = new int[maxSize*2];
    
    for (int i=0;i<maxSize;i++){
      vals2[i]=vals[i];
    }
    
    delete[] vals;
    vals = vals2;
    
    vals2=nullptr;
    
    maxSize*=2;

  }
  
  vals[size]=x;
  size++;
}

int DynamicArray::get(int i){
  return vals[i];
}
