#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
   void split(int n) {
    int A, B, C;
     A = n / 100;
     B = (n / 10) % 10;
      C = n % 10;
     printf("%d %d %d\n", A, B, C);
}

int main() {
    int num;
    scanf("%d", &num);
     split(num);

    return 0;
}
