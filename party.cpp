#include <iostream>

#define GB 1024 // MB
#define SONG_SIZE 11 // MB

using namespace std;

int main(int argc, char** argv)
{
	int a;
	cin >> a;
    int capacity_in_mb = GB * a;
    int songs = capacity_in_mb / SONG_SIZE;
    cout << songs << " songs" << endl;
}
