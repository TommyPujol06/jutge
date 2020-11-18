#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int a;
    int b;
    int c;
	cin >> a;
    cin >> b;
    cin >> c;
    cout << max(max(a, b), c) << endl;
}
