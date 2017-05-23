#include <stdio.h>

int main (){//char *argc, char **argv[]){


  printf("Hello Victory!\n");
  int  var = 15;
  int  *ip;
  printf("%x hex\n", &var);
  printf("%d deci\n", &var);
  ip = &var;
  printf("%d deci\n", ip);
  printf("%x hex\n", *ip );

  int var2 = 2;
  int *v2;
  v2 = &var2;
  printf("%x hex\n", *v2);

  return 0;
}

