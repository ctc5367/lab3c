// Author: Cole Carter ctc5367@psu.edu
// Collaborator: eric zhang ecz5032@psu.edu
// Collaborator: Andrew Wang aqw5628@psu.edu
// Collaborator: Ryan Attia rka5347@psu.edu
// Section: 5 
// Breakout: 14


#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n){
  if(n > 0){
    return  n + sum_n(n-1);
  }
  else{
    return 0;
  }
}

void print_n(const char *s, int n){
  if (n > 0){
    printf("%s\n", s);
    print_n(s, n-1);
  }
}

int main(void) {

  char* num = readline("Enter an int: ");
  int num_int = atof(num);
  printf("sum is %d.\n", sum_n(num_int));

  char* str = readline("Enter a string: ");
  print_n(str, num_int);
}
