#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    int a;
    string message;
    string warning = "";
	cin >> a;
    if(a > 30)
        message = "it's hot";
    else if(a < 10)
        message = "it's cold";
    else
        message = "it's ok";         

    if(a <= 0)
        warning = "water would freeze";
    if(a >= 100)
        warning = "water would boil";

    cout << message << endl;
    if(warning != "")
        cout << warning << endl;
}
