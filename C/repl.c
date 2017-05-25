#include <stdio.h>

int main(char *argc, char **argv[]){

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
      //     if(str[i]==";"){
	//printf("%s\n",str);
	//}
    //}
    // printf("%s\n", str);
  }
  return 0;
}
