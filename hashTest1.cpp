/*
 * Initial test cases for
 * the constructor,
 * get, and put functions
 * of this class
 */

#include "interviewhash.h"

int main(){
  //Constructor tests:
  CustomHashMap<int> test1(10);
  //No argument should yield error
  CustomHashMap<int> test3();
  //Negative or 0 should yield error requesting at least 1 size
  //Large tests like 1000
//  CustomHashMap<int> test6(1000);
  //Boundary test of int

  //Put and tests:
  //Keys of equal length
  test1.put("abc", 3);
  test1.put("def", 5);
  int temp1 = test1.get("abc");
  assert(temp1 == 3);
  int temp2 = test1.get("def");
  assert(temp2 == 5);
  //Equal keys
  //Similar keys: palindromes, mixed up one such as
  //  cat, tac, tca, act
  //Empty keys
  //Long keys
  //
  //Invalid keys
  //Boundary values for types, such as 
  //  double, unsigned, signed, char, string, bool
  //Empty value should yield error
  //  ???: Should null value work?
  //
  //Return value of function should return true and false correctly

  /*CustomHashMap<int> test(5);
  printf("Hey there!\n");
  int garbage = 3;
  bool put = test.put("test", garbage); 
  printf("Put return bool: %d\n", put);
  test.get("test");*/
  return 0;
}
