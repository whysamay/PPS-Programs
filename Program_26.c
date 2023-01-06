#include <stdio.h>
int main() {
  int r, c, a[100][100], b[100][100], mul[100][100], i, j, k, sum=0, m, n;
  printf("Enter the number of rows for A ");
  scanf("%d", &r);
  printf("Enter the number of columns for A ");
  scanf("%d", &c);

 printf("Enter the number of rows for B");
  scanf("%d", &m);
  printf("Enter the number of columns for B ");
  scanf("%d", &n);
  if(r!=n)
  printf("invalid");
  else{
    printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) {
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++) {
      scanf("%d", &b[i][j]);
    }
  for(i=0;i<r;i++){
    for(j=0;j<n;j++){
      for(k=0;k<m;k++){
        sum= sum + a[i][k]*b[k][j];
      }
      mul[i][j]=sum;
      sum=0;
    }
  }
  for(i=0;i<r;i++){
    for(j=0;j<n;j++){
      printf("%d \t", mul[i][j]);
    }
    printf("\n");
  }
  }
  return 0;
}