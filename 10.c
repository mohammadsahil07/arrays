#include <stdio.h>
int main() {
  int r, c, a[100][100], b[100][100], sum[100][100],transpose[100][100],mult[100][100],i, j;
  printf("Enter the number of rows (between 1 and 100): ");
  scanf("%d", &r);
  printf("Enter the number of columns (between 1 and 100): ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
int n;
printf("Please enter the function for (addition press 1)  (subtraction press 2)  (transpose press 3)  (multiplication press 4)");
scanf("%d",&n);
 switch(n){ // adding two matrices
 case 1 : {printf("Performing addition");
    for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    } break;}
     

     case 2 : {printf("Performing subtraction");
        for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] - b[i][j];
    }
  
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }
     break;}

    case 3: {
        for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  } break;
    }

    case 4: {printf("Performing multiplication");
         for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            mult[i][j] = 0;
            for (int k = 0; k < n; k++) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display the result matrix
    printf("Resultant Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", mult[i][j]);
        }
        printf("\n");
    }

    }
 }
  return 0;
}
