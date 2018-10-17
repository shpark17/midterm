#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include"array_utils.h"

int main(int argc char **argv) {


  int dotProduct(const int *a, const int *b, int n, int *result);
    if(a == NULL || b == NULL || result == NULL) {
      return 1;
    }
    
    int result = 0;
    for(i=0; i<n; i++) {
      result += a[i]*b[i];
      return result;
    }
  printf("The dot product of the two arrays are %d\n", result);
  
  return 0;
}
