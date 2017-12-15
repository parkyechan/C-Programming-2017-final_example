#include<cstdio>
float sum(float x, float y);
float cha(float x, float y);
float gob(float x, float y);
float divide(float x, float y);
int main(){
  float num1, num2, sum_result, cha_result, gob_result, divide_result;
  for(;;){
    printf("\n 두 수를 입력하세요 \n");
    scanf("%f %f ", &num1, &num2);
    if(num1 == 0 || num2 == 0) break;
    else{
      sum_result = sum(num1, num2);
      cha_result = cha(num1, num2);
      gob_result = gob(num1, num2);
      divide_result = divide(num1, num2);
    }
    printf("두 수의 합은 %.2f입니다\n", sum_result);
    printf("두 수의 차는 %.2f입니다\n", cha_result);
    printf("두 수의 곱은 %.2f입니다\n", gob_result);
    printf("두 수의 나눗셈은 %.2f입니다\n", divide_result);
  }
  printf("프로그램을 종료합니다\n");

}

float sum(float x, float y){
  float result;
  result = x + y;
  return result;
}
float cha(float x, float y){
  float result;
  result = x - y;
  return result;
}
float gob(float x, float y){
  float result;
  result = x * y;
  return result;
}
float divide(float x, float y){
  float result;
  result = x / y;
  return result;
}
