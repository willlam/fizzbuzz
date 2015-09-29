//
//  main.c
//  FizzBuzz
//
//  Created by William Lam on 2015-09-29.
//  Copyright © 2015 William Lam. All rights reserved.
//

#include <stdio.h>


int main(void) {
  for (int i = 1; i <= 100; i ++) {
    if (i % 3 == 0 && i % 5 == 0) {
      printf("FizzBuzz\n");
    }
    else if (i % 3 == 0) {
      printf("Fizz\n");
    }
    else if (i % 5 == 0) {
      printf("Buzz\n");
    }
    else {
      printf("%d\n", i);
    }
  }
  return 0;
}