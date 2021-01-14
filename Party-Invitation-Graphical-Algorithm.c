#include <stdio.h>
int main()
{
  int k = 5;
  int n = 20;
  int M = n*4;
  int temp = 0;
  int rsum[10];
  int connect[n][n];
  int invited[1][n];  
  int i, j, t;
  for(i=0; i<n; i++) {
      for(j=0;j<n;j++) {
          connect[i][j] = 0; // a matrix created to connect and hold the relations
      }
  }
  // fill the matrix with random pairs of relationships as 1 and ensure diagonal is 0
  for(t=0; t<M; t++) {
      int i = rand() % n;
      int j = rand() % n;
      connect [i][j] = 1;
      connect [j][i] = 1;
      connect [i][i] = 0;
      connect [j][j] = 0;
  }
printf("The 2D connections matrix:\n");
for(i=0; i<n; i++) {
    for(j=0;j<n;j++) {
        printf("%d ", connect[i][j]);
        if(j==n-1){
            printf("\n");
        }
    }
}
// create a vector to store whom's invited
printf("showing whom invited as 1: \n");
for(i=0;i<n;i++) {
    invited[0][i] = 1; //initially everyone invited
    rsum[i]=0;
    for(j=0;j<n;j++) {
        rsum[i]=rsum[i]+connect[i][j]; // evaluate the number of connections for each person
    }
    // subject to the constraints to eliminate whom they don't satisfy them
    if(rsum[i]<5){
        rsum[i]=0;
    }
    else if(rsum[i]>15){
        rsum[i]=0;
    }
    else {
        rsum[i]=1;
    }
    printf("%d ", rsum[i]);
    temp=rsum[i]+temp;
}
printf("\n the total invitees: %d ", temp);
  return 0;
}
