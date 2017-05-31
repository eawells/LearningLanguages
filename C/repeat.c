#include <stdio.h>

int main(char *argc, char **argv[]){
  
  //scans input from the command line, and returns that as output
  // int i =0;
  //char c;
  char str[20];
  while (1){
    printf("New repl>");
    //scanf("%d %c", &i, &c);
    // scanf("%s", &str);
    fgets (str, 20, stdin);
    printf("=>");
    //printf("%d %c\n", i, str);
    
    for(int i=0; i <strlen(str); i++){
      printf("%c\n", str[i]);
    //      if(str[i]==";"){
	//printf("%s\n",str);
	//}
    }
    printf("%s\n", str);
  }
  
  return 0;
}
