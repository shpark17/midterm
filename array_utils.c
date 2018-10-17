#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include"array_utils.h"

int main(int argc char **argv)


int dotProduct(const int *a, const int *b, int n, int *result)
  int result = 0;
  for(i=0; i<n; i++) {
    result += a[i]*b[i];
    return result;
  }
