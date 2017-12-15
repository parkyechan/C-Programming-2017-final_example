#include<cstdio>
#include<stdlib.h>
#include<time.h>

int main(){
  int user_input, num;
  srand( (unsigned)time( NULL ));
  for(;;){
    num = 1 + rand()%10;
    printf("--------------------------------\n\n");
    printf("Computer 생성한 수가 홀수이면 1, 짝수이면 2를 입력하세요(종료 0) >\n");
    scanf("%d", &user_input);

    if(user_input == 0) break;

    printf("컴퓨터가 생성한 수는 %d 입니다.\n", num);
    if(num % 2 == 1 & user_input == 1)
      printf("정답입니다.\n");
    else if(num % 2 == 0 && user_input == 2)
      printf("정다입니다.\n");
    else
      printf("틀렸습니다.\n");

    printf("-----------------------------------\n");
  }
  printf("프로그램 종료\n");
}
