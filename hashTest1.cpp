/*
 * Initial test cases for
 * the constructor,
 * get, and put functions
 * of this class
 */

#include "interviewhash.h"

int main(){
  //Constructor tests:
  //No argument should yield error
  //Negative or 0 should yield error requesting at least 1 size
  //Large tests like 1000
  //Boundary test of int

  //Put tests:
  //Keys of equal length
  //Equal keys
  //Similar keys: palindromes, mixed up one such as
  //  cat, tac, tca, act
  //Empty keys
  //Long keys
  //
  //Boundary values for types, such as 
  //  double, unsigned, signed, char, string, bool
  //Empty value should yield error
  //  ???: Should null value work?
  //
  //Return value of function should return true and false correctly

  //Get tests:
  //Keys of equal length
  //Differences in letter case
  //Similar keys: palindromes, mixed up ones return correct values
  CustomHashMap<int> test(5);
  printf("Hey there!\n");
  int garbage = 3;
  bool put = test.put("test", garbage); 
  printf("Put return bool: %d\n", put);
  test.get("test");
  return 0;
}
