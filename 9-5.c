#include<cstdio>
int main(){
    int size;
    scanf("%d", &size);
    for(int i=0; i<size; i++){
      for(int j=size-i; j>1; j--){
        printf(" ");
      }
      for(int j=0; j<=i; j++){
        printf("*");
      }
      printf("\n");
    }
}
