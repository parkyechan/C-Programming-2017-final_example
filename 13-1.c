#include<cstdio>
#define SIZE 5
void swapMinMax(int nums[], int size());
void inputArray(int nums[], int size());
void printArray(int nums[], int size());

int main(void){
  int numbers[SIZE] = {0, };
  int i;

  inputArray(numbers, SIZE);
  printArray(numbers, SIZE);
  swapMinMax(numbers, SIZE);
  printArray(numbers, SIZE);
}

void inputArray(int nums[], int size){
  int i;
  for(i = 0; i<size; i++){
    printf("%d번째 입력 : ", i + 1);
    scanf("%d", &nums[i]);
  }
}

void printArray(int nums[], int size){
  int i;
  printf("출력:");
  for(i=0; i<size; i++){
    printf("%d ", nums[i]);
  }
  printf("\n");
}

/*최소최대값을 찾은 후 서로 값을 바꾸는 함수*/
void swapMinMax(int nums[], int size){
  int i, min, max, temp;
  min = max = 0;
  for(i = 1; i < size; i++){
    if(nums[min] > nums[i]) min = i;
    else if(nums[max] < nums[i]) max = i;
  }
  /*값 교환*/
  temp = nums[min];
  nums[min] = nums[max];
  nums[max] = temp;
}
