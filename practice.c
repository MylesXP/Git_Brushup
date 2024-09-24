#include <stdio.h>

int arrIterate(){
  int arr[6];
  for (int i = 0; i < 6; i++) {
    arr[i] = i;
    printf("%d",arr[i]);
  };
  return 0;
}

int main(){
  arrIterate();
}

//add a reverse array function


