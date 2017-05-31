#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(char *argc, char **argv)
{
  void practice(){
     void *my_pointer;
     int i = 10;
     my_pointer = &i;
     printf("%d \n", my_pointer);
     // printf("%d \n", &i);
     void *my_pointer2;
     char c = 'e';
     my_pointer2 = &c;
     printf("%d \n", my_pointer2);
     char *my_program;
     my_program = "Hello there";
     printf("%s \n", my_program);
     my_program =(char*) malloc(20);
     printf("Size of int %lu\n", sizeof(int));
     printf("Size of int %lu\n", sizeof(int*));
     printf("Size of int %lu\n", sizeof(float*));
     strcpy(my_program, "goodbye");
     printf("%s\n", my_program);
     free(my_program);
   }
  practice();
  return 0;
}

