void check_null_rows(int **matrix, int n, int m) {
  int i, j;
  for (i = 0; i < n; i++) {
    int flag = 1;
    for (j = 0; j < m; j++) {
      if (matrix[i][j] != 0) {
        flag = 0;
        break;
      }
    }
    if (flag) {
      printf("LINHA %d\n", i + 1);
    }
  }
}

void check_null_columns(int **matrix, int n, int m) {
  int i, j;
  for (j = 0; j < m; j++) {
    int flag = 1;
    for (i = 0; i < n; i++) {
      if (matrix[i][j] != 0) {
        flag = 0;
        break;
      }
    }
    if (flag) {
      printf("COLUNA %d\n", j + 1);
    }
  }
}

int sum_matrix(int **matrix, int n, int m) {
  int i, j, sum = 0;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      sum += matrix[i][j];
    }
  }
  return sum;
}

int main() {
  int n, m,i,j;
  scanf("%d %d", &n, &m);

  int **matrix = malloc(n * sizeof(int *));
  for (i = 0; i < n; i++) {
    matrix[i] = malloc(m * sizeof(int));
    for (j = 0; j < m; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  check_null_rows(matrix, n, m);
  check_null_columns(matrix, n, m);

  int sum = sum_matrix(matrix, n, m);
  printf("SOMA: %d\n", sum);

  return 0;
}