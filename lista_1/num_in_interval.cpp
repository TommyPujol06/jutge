#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int a;
	int b;
	cin >> a;
    cin >> b;

    if(a > b){
        cout << endl;
        exit(1);
    }

    string chr = ",";
    for(; a != b+1; a++){
        if(a == b) chr = "";
        cout << a << chr;
    }
    cout << endl;
}
