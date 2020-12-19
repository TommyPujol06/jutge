#include <iostream>

using namespace std;

int nth_fib(int n)
{
  if(n <= 1) { return n; }

  return nth_fib(n-1) + nth_fib(n-2);
}

int main()
{
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  cout << nth_fib(a) << " " << nth_fib(b) << " " << nth_fib(c) << " " << nth_fib(d) << endl;
}
