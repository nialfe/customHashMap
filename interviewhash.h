/*
 *  Header file for the interviewhash map
 * */
#ifndef _INTERVIEWHASH_H_
#define _INTERVIEWHASH_H_

#include <cassert>
#include <cstdlib>
#include <list>
#include <string>
#include <vector>

using std::string;
using std::list;

template <typename T>
struct Entry{
  string key;
  T val;
};

template <typename T>
class CustomHashMap{
  public:
    //Initializes the ultimate size of the hashMap to mapSize
    CustomHashMap(int mapSize);          //ctor
    ~CustomHashMap();                    //dtor

    //REQUIRES: key is a string and val is of type T
    //MODIFIES: this
    //EFFECTS: uses key to hash location and inserts val into that location
    //If key has already been hashed, will update with new val
    //If other keys have hashed to that area, will append new key and val
    //to the linked list at that location
    void put(string key, const T &val);

    //Will find val with key
    //Else, it returns NULL
    T get(string key);

  private:
    int size;                       //Ultimate size of hashMap
    std::vector< list<Entry<T> > > map;//The hashMap
    //REQUIRES: key be valid (not null)
    //MODIFIES: none
    //EFFECTS: returns the location of the hash
    int calculateHash(string key);

    //REQUIRES: key be valid (not null) and loc be an actual location in hashMap
    //MODIFIES: nothing
    //EFFECTS: returns pointer to an entry that matches the key 
    //If no entries match, then return pointer to end
    typename list<Entry<T> >::iterator findLoc(string key, int loc);
};

template <typename T>
CustomHashMap<T>::CustomHashMap(int mapSize) {
  assert(mapSize > 0);
  size = mapSize;
  map.reserve(mapSize);
  for(int i = 0; i < mapSize; ++i){
    printf("%d This should be working...\n", i);
  }
}
//Initially used below initializer constructor, but needed ifs
//CustomHashMap<T>::CustomHashMap(int mapSize) : size(mapSize) {}

template <typename T>
CustomHashMap<T>::~CustomHashMap() {}

template <typename T>
int CustomHashMap<T>::calculateHash(string key){
  int sum = 0;
  for(unsigned int i = 0; i < key.size(); ++i){
    sum += key[i];
  }
  printf("calculateHash works!\n");
  return sum % size;
}

template <typename T>
typename list<Entry<T> >::iterator CustomHashMap<T>::findLoc(string key, int loc){
  auto it = map.at(loc).begin();
  for(; it != map.at(loc).end(); ++it){
    if(key == it->key)
      return it;
  }
  printf("findLoc works!\n");
  return it;
}

template <typename T>
void CustomHashMap<T>::put(string key, const T &val){
  //Summing string in order to hash
  int loc = calculateHash(key);
  //Finding a duplicate of key which will be overwritten if it exists
  typename list<Entry<T> >::iterator temp;
  temp = findLoc(key, loc);
  if(temp == map.at(loc).end()){
    Entry<T> temp;
    temp.key = key;
    temp.val = val;
    map.at(loc).push_back(temp);
  }
  else{
    temp->val = val;
  }
}

template <typename T>
T CustomHashMap<T>::get(string key){
  printf("Attempting to retrieve...\n");
  printf("Size: %d\n", size);
  int loc = calculateHash(key);
  typename list<Entry<T> >::iterator temp;
  temp = findLoc(key, loc);
  T ret = 0;
  if(temp == map.at(loc).end())
    return ret;
  else
    return temp->val;
}
#endif/* INTERVIEWHASH_H */
