#include <stdio.h>
int f (int x, int y) {
  if (x + 2 < y) {
    x = x + 3;
    return y * x;
  }
  else {
    return x + y + 2;
  }
}

int main()
{
  printf("\n f(5,7) evaluates to %d", f(5,7));	
	return 0;
}
