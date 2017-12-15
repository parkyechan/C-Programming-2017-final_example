#include<cstdio>
#include<string.h>
#include<ctype.h>

int main(){
    char s[50];
    int len=0;

    printf("문자열을 입력하시오: ");
    gets(s);
    if(islower(s[0]))
      s[0] = toupper(s[0]);
    len = strlen(s);
    if(s[len] != '.'){
      s[len] = '.';
      s[len+1] = NULL;
    }
    printf("결과 문자열: %s\n", s);
}
