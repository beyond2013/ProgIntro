#include <stdio.h>
void f(int x, int y) {
  while (x < y) {
    printf("%d ", y - x);
    x = x + 1;
    y = y - 1;
  }
}	

int main()
{
	f(3,6);
	return 0;
}
