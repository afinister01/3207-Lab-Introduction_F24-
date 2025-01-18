#include "print_random.c"

char randchar(){
  int min = 65;
  int max = 90;
  int num = (rand() % (max - min + 1)) + min;
  char c = num; 
  return c;
}
