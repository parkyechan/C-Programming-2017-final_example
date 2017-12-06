#include<cstdio>
int fac(int n){
  if(n==1)
    return 1;
  else
    return n*fac(n-1);
}

int combination(int n, int r){
  return fac(n) / (fac(r) * fac(n-r));
}
int main(){
    int x, y;
    printf("숫자를 입력하세요 : ");
    scanf("%d %d", &x, &y);
    printf("C(%d, %d) = %d\n", x, y, combination(x, y));
}
