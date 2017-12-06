#include<cstdio>
int main(){
    char letter;
    while(1){
      printf("소문자를 입력하시오 : \n" );
      scanf("%c", &letter);

      if(letter == 'Q')
        break;
      if (letter <'a' && letter>'z')
        continue;
      letter -= 32;
      printf("변환된 대문자는 %c입니다.\n", letter);
    }
    printf("프로그램 종료\n");
}
