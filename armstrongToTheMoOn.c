#include <stdio.h>


int main() {
  int n,sum=0,re;
  scanf("%d",&n);

  int temp=n;

  while(temp>0) {
    re=temp%10;
    int pow=re*re*re;
    sum+=pow;
    temp/=10;
  }

  if(sum==n) {
    printf("Armstrong");
  }
  else {
    printf("Nope");
  }
  return 0;
}
//no use math.h i cry pepe hard. 
