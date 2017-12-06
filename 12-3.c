#include<cstdio>
#define SIZE 6
int main(){
  int freq[SIZE] = {0, };
  int i, j, candidate;
  for(;;){
    printf("몇번 후보자를 선택하시겠습니까(종료 -1)\n");
    scanf("%d", &candidate);
    if(candidate < 0) break;
    freq[candidate]++;

  }
  printf("\n기호\t 득표결과");
  for(i=1; i<SIZE; i++){
    printf("%2d\t\n", i);
    for(j=0; j<freq[i];j++){
      printf("*");
    }
    printf("\n");
  }
}
