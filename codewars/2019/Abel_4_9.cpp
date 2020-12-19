#include <iostream>

#define MIN_CPU_GEN 5
#define MIN_GPU_MEM 2
#define MIN_STORAGE 50

using namespace std;

int main()
{
	int cpu, gpu, storage;
	cin >> cpu >> gpu >> storage;
	if(cpu < MIN_CPU_GEN || gpu < MIN_GPU_MEM || storage < MIN_STORAGE)
		cout << "You can NOT run the game" << endl;
	else
		cout << "You can run the game" << endl;
}
