#include<cstdio>
int fac(int n){
  if(n==1)
    return 1;
  else
    return n*fac(n-1);
}
int main(){
  int x;
  printf("숫자를 입력하세요 : \n");
  scanf("%d", &x);
  printf("%d! 은 %d 입니다.\n",x , fac(x));
  
}
