#include "interviewhash.h"

int main(){
  CustomHashMap<int> test(5);
  printf("Hey there!\n");
  int garbage = 3;
  bool put = test.put("test", garbage); 
  printf("Put return bool: %d\n", put);
  test.get("test");
  return 0;
}
