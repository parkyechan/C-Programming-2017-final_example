#include<cstdio>
void GuGuDan(int iDan){
  int iCount;
  printf("%d Dan\n");
  for(iCount = 1; iCount < 10; iCount++)
    printf("%d * %d = %d\n", iDan, iCount, iDan*iCount);
}
int main(){
  int iValue;
  printf("Enter the Number>>");
  scanf("%d", &iValue);
  GuGuDan(iValue);
}
