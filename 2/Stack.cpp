#include "Stack.h"
#include <stddef.h>

Stack::Stack(){
    size = 10;
    pos = 0;
    data = new int[size];
}

Stack::Stack(int n){
    size = n;
    pos = 0;
    data = new int[size];
}

Stack::Stack(Stack &other){
    size = other.size;
    pos = other.pos;
    data = new int[size];
    for (int i=0;i<size;i++)
        data[i]=other.data[i];
}

Stack::~Stack(){
    delete[] data;
}

bool Stack::isEmpty(){
    return (pos==0);
}

bool Stack::pop(int &element){
    if (pos==0)
        return false;
    pos--;
    element=data[pos];
    return true;
}

bool Stack::push(int element){
    if(pos==size)
        moreMemory(5);
    data[pos]=element;
    pos++;
    return true;
}

bool Stack::moreMemory(int n){
  int *temp;
  temp = new int[n];
  if (temp==NULL)
    return false;
  for (int i=0;i<size;i++)
    temp[i]=data[i];
  delete[] data;
  data=temp;
  size=n;
  return true;
}
