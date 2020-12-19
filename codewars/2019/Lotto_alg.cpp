#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  int a,b;
  cin >> a >> b;

  double n = (double)a / (double)b;
  double whole = floor(n);
  double decs = n - whole;
  string str_decs = to_string(decs).substr(2);

  if(str_decs[0] != '0' && str_decs[1] == '0')
    cout << '1' << endl;
  else
    cout << '0' << endl;
}
