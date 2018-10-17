#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv) {

  int i;
  for(i=1; i<=100; i++) {
  if (i%3 == 0) {
    printf("Fizz\n");
  } else if (i%5 == 0) {
    printf("Buzz\n");
  } else if (i%3 && i%5) {
    printf("FizzBuzz\n");
  } else {
    printf("%d\n", i);
  }   
 }
 return 0;
} 
