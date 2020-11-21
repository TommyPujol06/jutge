#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv)
{
    int a;
    int res = 0;
    cin >> a;

    for(int i=1; i != a+1; i++)
        res += pow(i, 2);
    
    cout << res << endl;
}
