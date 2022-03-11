/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}

long Factorial(int no)
{
  long fac = 1;
  for (int t=no; t >= 1; t--) {
  fac = fac * t;
  }
  return fac;
}

long nCr(int n, int r)
{
  int Fn,Fr,Fnr;
  long ncr;
  
  Fn=Factorial(n);
  Fr=Factorial(r);
  Fnr=Factorial(n-r);

ncr=Fn/(Fr*Fnr);

  return ncr;
  
}
