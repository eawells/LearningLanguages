#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 200
#include <string.h>

//figure out how to use strtok to evaluate functions given to the
//repl
int main(char *argc, char **argv[]){
  float ans = 0;
  char string[20]  = "(/ 12 24)";
  const char delim[2] = " ";
  char *token;
  char *token2;
  char *token3;
  token = strtok(string, delim);
  token2 = strtok(NULL, delim);
  token3 = strtok(NULL, delim);
  
  //const char delim2[2] = ")";
  
  int two = atoi(token2);
  int three = atoi(token3);
  
  if(strncmp(token, "(*", 10) == 0){
    ans = two * three;
    printf("%4.1f works\n", ans);
  }
  else if(strncmp(token, "(/", 10) == 0){
    ans = (float) two / (float) three;
    printf("%5.1f\n", ans);
    
  }
  else if(strncmp(token, "(+", 10) == 0){
    ans = two + three;
    printf("%4.1f works\n", ans);
  }
  else if(strncmp(token, "(-",10) == 0){
    ans = two - three;
    printf("%4.1f works\n", ans);
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
