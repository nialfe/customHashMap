/*
 *  Header file for the interviewhash map
 * */
#ifndef _INTERVIEWHASH_H_
#define _INTERVIEWHASH_H_

#include <list>
#include <vector>

template <typename T>
class CustomHashMap{
  int size;

  public:
    CustomHashMap(int mapSize);          //ctor
    ~CustomHashMap();                    //dtor

    bool put(string key, const T &val);
    T get(string key);
};
//: size(size) {}
#endif/* INTERVIEWHASH_H */
