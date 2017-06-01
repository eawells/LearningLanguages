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

int read_file(){
  char buff[300];
  FILE *fp;
  // fp = fopen("Hello_Liz.sky", "r");
  //fscanf(fp, "%s", buff);

  // int character =0;
  /**
  for(int i =0; i< 10; i++){
    result = fgets(buff, 30, fp );
    //character = fgetc(fp);
    //character = fgets(buff, 30, fp);
    printf("%s", result);
    //printf("%c\n", character);
  }
  **/
  fp = fopen("Hello_Liz.sky", "r");

  //fscanf(fp, "%s", buff);
  // printf("1 : %s\n", buff );
  char *result;
   for(int i =0; i< 10; i++){
    result = fgets(buff, 30, fp );
    //character = fgetc(fp);
    printf("%s", result);
    // printf("%c\n", character);
     }

  fclose(fp);
  return 0;
}
 
int write_file(){
  FILE *fp;
  fp = fopen("Hello_Liz.sky", "w");

  fputs("Goodbye Victory\n", fp);
  fclose(fp);
  
  return 0;
}
  

int  fileio (){
  return 0;
}

int main(char *argc, char **argv[]){
  //printf("%s\n", eval(read("program")));
  //repl(argc, argv);
  // read_file();
  write_file();
  return 0;
  
  }
 
