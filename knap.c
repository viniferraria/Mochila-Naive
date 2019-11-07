#include <stdio.h>
#include "knap.h"

int knap(int peso[], int valor[], int n, int capacidade){
  if(n == 0) return 0;
  else{
    int a = knap(peso, valor, n - 1, capacidade);
      if(peso[n] > capacidade){
        return a;}
      else{
        int b = knap(peso, valor, n-1, capacidade - peso[n]) + valor[n];
        return (a>b) ? a : b;
      }
  }
} 