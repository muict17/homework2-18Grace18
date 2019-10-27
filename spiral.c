#include <stdio.h>

int main(void) {
  int a[10][10],n,m,i,j;
  printf("Row & Column: ");
  scanf("%d %d",&n,&m);

  printf("Element: ");
  for(i=0;i<n;i++) {
    for(j=0;j<m;j++) {
      scanf("%d",&a[i][j]);
    }
  }
  printf("\nMatrix:\n");
  for(i=0;i<n;i++) {
    for(j=0;j<m;j++) {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  printf("\nSpiral: ");
  int q=0,r=m-1;
  for(i=0;i<n;i++) {
    if(i%2==0) {
      for(j=q;j<m;j++) {
        printf("%d ",a[i][j]);
      }
    }
    else if(i%2>0) {
      for(j=r;j>=0;j--) {
        printf("%d ",a[i][j]);
      }
    }
  }
  return 0;
}
