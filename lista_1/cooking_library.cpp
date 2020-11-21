#include <iostream>

#define CUP_MM 236 // mm

using namespace std;

int main(int argc, char** argv)
{
	int a;
	cin >> a;
    cout << a << " US cups are " << a*CUP_MM << " milliliters" << endl;
}
