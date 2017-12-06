#include<cstdio>
#define SIZE 10
int main(){
  int nums[size] = {0};
  int i;
  for(i = 0; i<SIZE; i++){
    printf("%d번째 정수 입력:\n", i+1);
    scanf("%d", &nums[i]);
  }

  printf("\n 역순 출력 :");
  for(i = SIZE - 1; i>= 0; i--){
    printf("%d ", nums[i]);
  }
  printf("\n");
}
