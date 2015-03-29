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
  vector< list<T> > map;

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
  int sum = 0;
  for(unsigned int i = 0; i < key.size(); ++i){
    sum += key[i];
  }
  int loc = sum % size;
  bool inserted = false;
  for(auto it = map.at(loc).begin(); it < map.at(loc).end(); ++it){
    if(key == map.at(loc).key){
      map.at(loc).
      inserted = true;
    }
  }
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
