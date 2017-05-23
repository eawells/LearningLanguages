#include <stdio.h>

int main(char *argc, char **argv[]){
  //printf("Hello Victory!\n");
  int var = 15;
  int *ip;
  ip = &var;
  // printf("%x\n", ip);
  //  printf("%x\n", &var);
  //printf("%d\n", *ip);

  int square(int x){
  return x * x;
  }
  // printf("%d\n",square(5));
  // printf("%d\n" ,argc);
  //  for(int i =0; i< argc; i++){
  //printf("%s\n", argv[i]);
  //}
  int i =0;
  while (1){
    printf("repl>");
    scanf("%d", &i);
    printf("=>");
    printf("%d\n",i);
  }

  return 0;
}

