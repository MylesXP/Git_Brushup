#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randArr(){
  int arr[6];
  printf("{ ");
  unsigned int seed = time(0);
  for (int i = 0; i < 6; i++) {
   int randNum = rand_r(&seed) % (10 + 1 -1) + 1;
   arr[i] = randNum;
   printf("%d, ", arr[i]);
  };
  printf("}");
  return 0;
}

int main(){
  randArr();
}

//add a reverse array function


