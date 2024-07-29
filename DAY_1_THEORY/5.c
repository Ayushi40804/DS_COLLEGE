//What does the above program print?
#include <stdio.h>
void foo(int n, int sum) 
{ 
  int k = 0, j = 0; 
  if (n == 0) return; 
    k = n % 10;  
  j = n / 10; 
  sum = sum + k; 
  foo (j, sum); 
  printf ("%d,", k); 
} 
int main () 
{ 
  int a = 2048, sum = 0; 
  foo (a, sum); 
  printf ("%d\n", sum); 
    
  getchar(); 
}