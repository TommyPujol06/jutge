#include <iostream>

#define SPEED_LIGHT 300000

using namespace std;

int main()
{
	int time;
	cin >> time;
	int distance = (SPEED_LIGHT * time)/2;
	cout << distance/1000 << endl;
}
