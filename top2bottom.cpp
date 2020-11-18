#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int a;
	int b;
	cin >> a;
    cin >> b;
    if(a > b) {
        swap(a, b);
    }

    for(; a-1 != b; b--)
        cout << b << endl;
    
}
