#include<cstdio>
int main(){
  int num[5], i, max;
  for(int i=0; i<5; i++){
    printf("숫자를 입력하세요 : ");
    scanf("%d", &num[i]);
  }
  max = num[0];
  for(i = 1; i < 5; i++){
    if(num[i]>max)
      max = num[i];
  printf("입력 값 중 가장 큰 수 = %d \n", max);
}
