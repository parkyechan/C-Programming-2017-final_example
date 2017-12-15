#include<cstdio>
struct student{
  int number;
  char name;
  double grade;
};
int main(){
  struct student s;
  printf("학번을 입력하시오:");
  scanf("%d", &s.number);
  printf("학번을 입력하시오:");
  scanf("%s", &s.name);
  printf("학번을 입력하시오:");
  scanf("%lf", &s.grade);
  printf("학번: %d\n", s.number);
  printf("이름: %d\n", s.name);
  printf("학점: %d\n", s.grade);
}
