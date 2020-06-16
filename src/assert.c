#include <stdio.h>
#include <assert.h>
 
int main() {
  int a, b;
 
  printf("Input two integers to divide\n");
  scanf("%d%d", &a, &b);
 
  assert(b != 0);
 
  printf("%d/%d = %.2f\n", a, b, a/(float)b);
 
  return 0;
}
