#include<cstdio>
void even_odd(int x);
int main(){
  int num;
  for(;;){
    printf("\nEnter the Number(if you wanna stop, enter the 0)>>");
    scanf("%d", &num);
    if(num == 0) break;
    else even_odd(num);
  }
  printf("End of Program.");
}

void even_odd(int x){
  if(x%2==0)
    printf("Number %d is even\n", x);
  else
    printf("Number %d is odd\n", x);
}
