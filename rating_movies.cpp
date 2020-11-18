#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int a;
    cin >> a;
    if(a == 0) {
        cout << "-" << endl;
        exit(0);
    }

    for(int i=0; i != a; i++)
        cout << "*";
    cout << endl;
}
