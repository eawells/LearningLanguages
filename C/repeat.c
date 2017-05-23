#include <stdio.h>

int main(char *argc, char **argv[]){
  
  //scans input from the command line, and returns that as output
  int i =0;
  char c;
  while (1){
    printf("New repl>");
    scanf("%d %c", &i, &c);
    //scanf("%d", &i);
    printf("=>");
    printf("%d %c\n", i, c);
  }
  
  return 0;
}
