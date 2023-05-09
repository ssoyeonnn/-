#include<stdio.h>
main(){
    int a;
  printf("1:90점이상, 2:80점이상, 3:70점이상, 4:60점이상, 5:60점미만");
  scanf ("%d",&a);

  if(a==1)
    printf("A학점\n");
  else if(a==2)
    printf("B학점\n");
  else if(a==3)
    printf("c학점\n");
  else if(a==4)
    printf("D학점\n");
  else
    printf("F학점\n");
 printf("학점 조사 끝");
}