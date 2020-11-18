#include <iostream>

#define INK_PER_BOOK 3

using namespace std;

int main(int argc, char** argv)
{
	int a;
	int b;
	cin >> a;
    cin >> b;
    cout << b-(INK_PER_BOOK*a) << endl;
}
