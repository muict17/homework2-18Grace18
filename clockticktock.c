#include <stdio.h>

int main() {
  int hour,min;
  float h,m,angle;
  printf("Hour & Minute: ");
  scanf("%d %d",&hour,&min);

  if(hour>0&& min>0 && hour<12 && min<60) {
    h = 0.5*(hour*60+min);
    m = min*6;
  }
  else {
    printf("Error");
    return 0;
  }

  angle=h-m;

  if(angle<0) {
    angle*=-1;
  }
  if(angle>180) {
    angle-=180;
  }
  printf("Time: ");
  printf("%d:%d",hour,min);
  printf("\nAngle: ");
  printf("%.2f",angle);
  return 0;
}
