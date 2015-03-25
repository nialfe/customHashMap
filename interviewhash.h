/*
 *  Header file for the interviewhash map
 * */
#ifndef _INTERVIEWHASH_H_
#define _INTERVIEWHASH_H_

#include <cstdlib>
#include <list>
#include <string>
#include <vector>

using std::string;

template <typename T>
class CustomHashMap{
  int size;

  public:
    CustomHashMap(int mapSize);          //ctor
    ~CustomHashMap();                    //dtor

    bool put(string key, const T &val);
    T get(string key);
};

template <typename T>
CustomHashMap<T>::CustomHashMap(int mapSize) : size(mapSize) {}

template <typename T>
CustomHashMap<T>::~CustomHashMap() {}

template <typename T>
bool CustomHashMap<T>::put(string key, const T &val){
  printf("Attempting to put...\n");
  printf("Size: %d\n", size);
  return true;
}

template <typename T>
T CustomHashMap<T>::get(string key){
  printf("Attempting to retrieve...\n");
  printf("Size: %d\n", size);
  T temp;
  return temp;
}
//: size(size) {}
#endif/* INTERVIEWHASH_H */
