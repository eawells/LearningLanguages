#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 200
#include <string.h>

//figure out how to use strtok and switches to evaluate functions given to the
//repl
int main(char *argc, char **argv[]){
  float ans = 0;
  char string[20]  = "(* 3 10)";
  const char delim[2] = " ";
  char *token;
  char *token2;
  char *token3;
  token = strtok(string, delim);
  token2 = strtok(NULL, delim);
  token3 = strtok(NULL, delim);
  
  const char delim2[2] = ")";
  
  int two = atoi(token2);
  int three = atoi(token3);
  //printf("Lucas: %d\n", two);
  
  if(strcmp(token, "(*") == 0){
    ans = two * three;
    printf("%4.1f works\n", ans);
  }
  else if(strcmp(token, "(/") == 0){
    ans = two / three;
    printf("Doesn't work");
  }
  else if(strcmp(token, "(+") == 0){
    ans = two + three;
    printf("Doesn't work");
  }
  else if(strcmp(token, "(-") == 0){
    ans = two - three;
    printf("Doesn't work");
  }
  else{
    printf("Please enter a *,/,+,- operator\n");
  }
  
  
  /**
    switch(token){
    case "(*":
      op='*';
      break;
    case "(/":
      op='/';
      break;
    case "(+":
      op = '+';
      break;
    case "(-":
      op='-';
      break;
    default:
	printf("Please enter a *,/,+,- operator\n");
    }
    
  **/
  
  
  /**while(token != NULL){
    printf("%s\n", token);
    token = strtok(NULL,delim);
  }**/
  // printf("%s\n",token);
  //printf("%s\n", token2);

  return 0;
  
  }
