#include <iostream>

using namespace std;

int main()
{
    string inp;
    getline(cin, inp);
    int inp_len = inp.length();
    for(int i=0; i != inp_len; i++) {
        char val = inp[i];
        if(i == inp_len-1 && (val == 'r' || val == 'R')) {cout << val << val; break;}
        if((val == 'r' || val == 'R') && inp[i+1] == ' ') {
            cout << val << val;
        } else 
            cout << val;
    }

    cout << endl;
}
