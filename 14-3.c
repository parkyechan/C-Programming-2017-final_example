#include<cstdio>
#include<ctype.h>
int main(){
  char input[100] ="";
  int i;

  printf("문장을 입력:");
  gets(input);

  for(i=0; input[i] != '\0'; i++){
    if(islower(input[i]))
      input[i] = toupper(input[i]);
    else if(isupper(input[i]))
      input[i] = tolower(input[i]);
  }
  puts(input);
  
}
