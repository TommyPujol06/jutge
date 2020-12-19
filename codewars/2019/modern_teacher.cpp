#include <iostream>
#include <vector>
#include <regex>

using namespace std;

int main()
{
	string templ;
	string key;
	vector<string> repl_with;
	int N;

	getline(cin, templ);
	cin >> key >> N;

	for(int i=0; i != N; i++){
		string tmp;
		cin >> tmp;
		repl_with.push_back(tmp);
	}

	for(auto val : repl_with)
		cout << regex_replace(templ, regex(key), val) << endl;
}
