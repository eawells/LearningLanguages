
#include <stdio.h>

int main(int *argc, char **argv[]){
  //printf("Hello Victory!\n");
  int var = 15;
  int *ip;
  ip = &var;
   printf("%x\n", ip);
    printf("%x\n", &var);
  printf("%d\n", *ip);

  int square(int x){
  return x * x;
  }
   printf("%d\n",square(5));
   printf("%d\n" ,argc);
   for(int i =0; i< argc; i++){
     printf("%s\n", argv[i]);
   }
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
