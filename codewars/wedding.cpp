#include <iostream>

#define MASIA 100

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if(a+b >= MASIA)
		cout << "The wedding will take place in very big masia." << endl;
	else
		cout << "The wedding will take place in Monestir de Sant Cugat." << endl;
}
