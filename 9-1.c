#include<cstdio>
int main(){
    int num = 0;
    for(num = 1; num<=10; num++){
      if (num % 3 == 0)
        continue;
      printf("%d ", num);
    }
    printf("\n");
}
