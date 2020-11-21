#include <iostream>

using namespace std;

int pow(int n, int exp)
{
    int res = 1;
    while(exp != 0){
        res *= n;
        exp--;
    }
    return res;
}

int main(int argc, char** argv)
{
    int a;
    cin >> a;

    string chr = ",";
    for(int i=0; i != a+1; i++){
        if(i == a) chr = "";
        cout << pow(i, 3) << chr;
    }
    cout << endl;

}
