#include <stdio.h>

int repl(char *argc, char **argv){
  char str[20];
  while (1){
    printf("New repl>");
    fgets (str, 20, stdin);
    printf("=>");
    int first = 0;
    int second = 0;
    // int ans =0;
    float ans = 0;
    char op;
    // for(int i=0; i <strlen(str); i++){
    //printf("%c\n", str[i]);
    first = str[0]-'0';
    op = str[1];
    second = str[2]-'0';
    if(op == '*'){
      ans = first * second;
    }
    else if(op == '+'){
      ans = first + second;
    }
    else if(op == '-'){
      ans = first - second;
    }
    else if(op == '/'){
      ans = first / (float)second;
    }
    
    printf("%.2f\n",ans);
  }
  return 0;
}
  
char *read(char *program){
  
  return program;
}

char *eval(char *program){

  return program;
}

int main(char *argc, char **argv[]){
  printf("%s\n", eval(read("program")));
  repl(argc, argv);
  
  return 0;
  
  }
 
