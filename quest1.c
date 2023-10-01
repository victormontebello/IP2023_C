#include <stdio.h>
#include <stdlib.h>

int is_permutation_matrix(int **matrix, int n) {
  int i, j, count;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (matrix[i][j] != 0 && matrix[i][j] != 1) {
        return 0;
      }
    }
  }

  for (i = 0; i < n; i++) {
    count = 0;
    for (j = 0; j < n; j++) {
      if (matrix[i][j] == 1) {
        count++;
      }
    }
    if (count != 1) {
      return 0;
    }
  }

  return 1;
}

int main() {
  int n, i, j, d,k;
  int **matrix;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d", &d);

    matrix = malloc(d * sizeof(int *));
    for (j = 0; j < d; j++) {
      matrix[j] = malloc(d * sizeof(int));
      for (k = 0; k < d; k++) {
        scanf("%d", &matrix[j][k]);
      }
    }

    if (is_permutation_matrix(matrix, d)) {
      printf("Matriz permutacao\n");
    } else {
      printf("Nao permutacao\n");
    }

    for (j = 0; j < d; j++) {
      free(matrix[j]);
    }
    free(matrix);
  }

  return 0;
}