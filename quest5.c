#include <stdio.h>

int main() {
  int n;
  int i;
  scanf("%d", &n);
  int a[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  int unique = 0;
  int seen[1000] = {0};
  for (i = 0; i < n; i++) {
    if (seen[a[i]] == 0) {
      seen[a[i]] = 1;
      printf("%d\n", a[i]);
      unique++;
    }
  }

  return 0;
}
