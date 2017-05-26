#include <stdio.h>

int main(char *argc, char **argv){

  char str[50];
  while (1){
    printf("atom repl>");
    fgets (str, 50, stdin);
    printf("=>");
    //If the string starts with "(", then take the first word and
    //see if it is atom, listp, car, or cdr

    //if it's atom, then check if the next two chars after a space is '(
    //or if the first char is (, if true, return false. Else, return true

    //if it's lisp, then return the opposite of atom

    //if it's car, then skip the first two chars, and return the first word

    //if it's cdr, then skip the first segment until a space, and return
    //everything until ")"
    if(str[1]=="("){
      scanf("%s", &str);
      if(("%s\n", str)=="(atom"){
	printf("works");
      }
    }
      /**
    for(int i=0; i <strlen(str); i++){
      // printf("%c\n", str[i]);
      if(str[i]==""){
	
	//printf("%s\n",str);
      }
    }
      **/
  }


  return 0;
}
