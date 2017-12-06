#include<cstdio>
int main(){
    int i, j;
    for(i = 2; i < 10; i++){
      printf("===%d Dan===\n", i);
      for(j=1; j<10; j++){
        printf("%d * %d %d\n", i, j, i*j);
      }
      printf("\n");
    }
}
