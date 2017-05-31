
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int square(int x){
  return x * x;
}


int main (int argc, char **argv[]){

 
  printf("Hello Victory!\n");
  int  var = 15;
  int  *ip;
  //printf("%x hex\n", &var);
  //printf("%d deci\n", &var);
  ip = &var;
  //printf("%d deci\n", ip);
  /// printf("%x hex\n", *ip );

  int var2 = 2;
  int *v2;
  v2 = &var2;
  //printf("%x hex\n", *v2);
  // printf("%d\n" ,argc);

  //char *name;
  int MAX_LEN = 30;

  char * name = malloc(MAX_LEN+1);
  char str[20];
  char *i;
  while (1){
    printf("repl>");
    //scanf(" %s", i);
    //scanf("%s", str);
fgets (name, 20, stdin);

char your_character = '4';
int your_int = your_character - '0';
printf("This is an integer!: %d\n",your_int);
    
    for(int i =0; i< strlen(name); i++){

      // while(str[i] != ';'){
      //   printf("No semicolon\n");
      //  i++;
      // }
      printf("%c\n", name[i]);

      // printf("%c\n",name);
  }
    printf("=>");
    printf("%s\n",name);
  }
  

  return 0;
}




