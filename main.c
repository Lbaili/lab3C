// Author: Chang Li cxl5844@psu.edu
// Collaborator: Daniel Mikita djm6907@psu.edu
// Collaborator: John O’Toole jbo5232@psu.edu
// Section: 1
// Breakout: 8

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n){
  if  (n <= 0){
    return 0;
  }
  else {
    return sum_n(n-1)+n;
  }
}

void print_n(char *s, int n){
  if (n > 0){
    printf("%s\n",s);
    print_n(s, n-1);
  }
}

int main(void) {
  int a = atof(readline("Enter an int: "));
  printf("sum is %d.\n",sum_n(a));
  char *b = readline("Enter a string: ");
  print_n(b, a);
  
  return 0;
}