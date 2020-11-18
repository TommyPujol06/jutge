#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int jars;
	string plural = "";
	cin >> jars;
	if(jars > 1)
		plural = "s";
	cout << jars << " lemonade jar" << plural << endl;
}
