#include <stdio.h>

int main() {
  int n, i,t;
  scanf("%d", &t);
  for(int j=1; j<=t; j++)
  {
      int c = 0;
      scanf("%d", &n);

      for (i = 1; i <= n; i++) {
          if (n % i == 0) {
             c++;
          }
      }

      if (c == 2) {
            printf("Yes\n");
      }
      else {
             printf("No\n");
      }
  }

  return 0;
}
