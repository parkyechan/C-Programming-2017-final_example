#include<cstdio>
int main(){
  int i = 3000;
  int *p = &i;
  printf("&i = %u\n", &i);
  printf("i = %d\n", i);

  printf("*p = %d\n", *p);
  printf("p = %u\n", p);
}
