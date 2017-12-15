#include<cstdio>
int main(){
    char input[100] = "";
    int cntAlpha['Z'-'A' + 1] = {0, };
    int i;

    printf("문자열 입력: ");
    scanf("%s", input);
    for(i = 0; input[i]!='\0'; i++){
      if(input[i] >= 'a' && input[i] <='z')
        cntAlpha[input[i] - 'a']++;
      else if(input[i] >= 'A' && input[i] <= 'Z')
        cntAlpha[input[i] - 'A']++;
    }

    for(i=0; i<26; i++){
      printf("%c: %d\t\n", 'A'+i, cntAlpha[i]);
      if((i+1) % 5 == 0) printf("\n");
    }
    printf("\n");
}
