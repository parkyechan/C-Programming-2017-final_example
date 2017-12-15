#include<cstdio>
#include<string.h>
int main(){
  char s[50], t[50];
  int i, j=0;

  printf("공백 문자가 포함된 문자여 입력:");
  gets(s);

  for(i = 0; s[i]!=NULL; i++){
    if(s[i] != ' ')
      t[j++] = s[i];
  }
  t[j] = NULL;
  printf("결과 문자열: %s\n", t);
}
