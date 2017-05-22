#include <stdio.h>

int main(char *argc, char **argv[]){
  printf("Hello Victory!\n");
  int var = 15;
  int *ip;
  ip = &var;
  printf("%x\n", ip);
  printf("%x\n", &var);
  printf("%d\n", *ip);

  return 0;
}


