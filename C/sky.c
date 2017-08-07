#include <stdio.h>
#define MAX_LENGTH 200
#include <string.h>

int repl(){
  char str[20];
  while (1){
    printf("sky>");
    fgets (str, 20, stdin);
    printf("=>");

     float ans = 0;
  
  const char delim[2] = " ";
  char *token;
  char *token2;
  char *token3;
  token = strtok(str, delim);
  token2 = strtok(NULL, delim);
  token3 = strtok(NULL, delim);
  
  int two = atoi(token2);
  int three = atoi(token3);
 
  if(strcmp(token, "(*") == 0){
    ans = two * three;
    printf("%4.1f works\n", ans);
  }
  else if(strcmp(token, "(/") == 0){
    ans = two / three;
    printf("%5.1f\n", ans);
    
  }
  else if(strcmp(token, "(+") == 0){
    ans = two + three;
    printf("%4.1f works\n", ans);
  }
  else if(strcmp(token, "(-") == 0){
    ans = two - three;
    printf("%4.1f works\n", ans);
  }
  else{
    printf("Please enter a *,/,+,- operator\n");
  }
    
    int first = 0;
    int second = 0;
    // int ans =0;
    float ans = 0;
    char op;
    // for(int i=0; i <strlen(str); i++){
    //printf("%c\n", str[i]);
   
    first = str[3]-'0';
    op = str[1];
    second = str[5]-'0';

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

void prototypes(){
   int switch_example(){
    char my_char;
    my_char = 'I';
    switch(my_char){
    case '1':
      printf("It's one\n");
      break;
    case 'b':
      printf("It's a b\n");
      break;
    case 'I':
      printf("It's an I\n");
      break;
    default:
	printf("Your char is not in this variable\n");
    }
    return 0;
  }
  //printf("%s\n", switch_example());

  char string[50] = "Hey, how are-you doing?";
  const char delim[2] = " ";
  char *token;
  //char *token2;
  token = strtok(string,delim);
  //token2 = strtok(NULL,delim);
 
  while(token != NULL){
    printf("%s\n", token);
    token = strtok(NULL,delim);
  }
  // printf("%s\n",token);
  //printf("%s\n", token2);


}

int main(char *argc, char **argv[]){
  //printf("%s\n", eval(read("program")));
  //repl(argc, argv);
  // read_file();
  //write_file(); 
  repl();
  return 0;
  
  }
