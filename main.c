#include <stdio.h>
#include "knap.h"

int main(void) {
  int p[5] = {1,3,4,5,2};
  int valor[5] = {1,4,5,7,4};
  int capacidade = 9;
  // awnser = 13

  int x = knap(p,valor,5, capacidade);
  printf("%d",x);

  return 0;
}   