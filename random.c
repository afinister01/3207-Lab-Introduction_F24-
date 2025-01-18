#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
  int min = 65;
  int max = 90;
  int num = (rand() % (max - min + 1)) + min;
  char c = num; 
  return c;
}
