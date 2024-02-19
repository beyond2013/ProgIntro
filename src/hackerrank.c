#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
	int _and=0, _or=0, _xor=0;
	int m_and=0, m_or=0, m_xor=0;
  for(int i=1; i < n;i++){
      for(int j=i+1; j <= n; j++)
      {
				
				_and = i & j;
				_or = i | j;
				_xor = i ^ j;
				if(_and < k && _and > m_and) m_and = _and;
				if(_or < k && _or > m_or) m_or = _or;
				if(_xor < k && _xor > m_xor) m_xor = _xor;
        //printf("i=%d j=%d\t i & j = %d \t i | j = %d \t i ^ j = %d \n", i,j, m_and, m_or, m_xor);
      }
  }
     printf("%d\n%d\n%d", m_and,m_or,m_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

