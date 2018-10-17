#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include "array_utils.h"

int main(int argc char **argv) {


  int dotProduct(const int *a, const int *b, int n, int *result);
    if(a == NULL || b == NULL || result == NULL) {
      return 1;
    }
    
    int total = 0;
    for(i=0; i<n; i++) {
      total += a[i]*b[i];
      return total;
    }
  *result = total;
  return 0;
}
