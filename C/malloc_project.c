#include <stdio.h>
#include <stdlib.h>

int main(char *argc, char **argv)
{
  //The task is to make an array that can store values of any type using malloc

  //We want to check what the size given to the array and see if it is too big
  //if it is too big, then we want to use malloc to increase the size

  //ask the user for the first element in the array
  
  void *my_program;
  
  my_program = malloc(50);
  /** 
  int int_array[7] = {1,2,3,4.5,5,6,7};
  int *pointer_array[7];

  for(int i=0; i<7; i++){
      pointer_array[i] = &int_array[i];
  }
  for(int i=0; i<7; i++){
    printf("%d\n", *pointer_array[i]);
  }
  **/
  char void_array[4] = {1,'v',6.78,"elizabeth"};
  int i = 1;
  char c = 'v';
  float f = 6.78;
  char char_array[] = "elizabeth";

  void *pointer_array[4];
  pointer_array[0] = &i;
  pointer_array[1] = &c;
  pointer_array[2] = &f;
  pointer_array[3] = &char_array[3];
    /**
  for(int i=0; i<4; i++){
      pointer_array[i] = &void_array[i];
  }
    **/
  printf("%d\n", *(int*)pointer_array[0]);
  printf("%c\n", *(char*)pointer_array[1]);
  printf("%4.2f\n", *(float*)pointer_array[2]);
  printf("%c\n", *(char*)pointer_array[3]);
  /**  
  for(int i=0; i<7; i++){
    printf("%c\n", *(void*)pointer_array[i]);
  }
  **/
  return 0;
}
