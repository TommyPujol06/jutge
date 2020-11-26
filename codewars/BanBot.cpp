#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <regex>

#define BAN_MSG "User is banned."
#define ACC_MSG "User is exhibiting a friendly behaviour."

using namespace std;

vector<string> split(string& str, char delim)
{
	vector<string> split_string;
	string curr;

	for(auto chr : str) {
		if((chr == delim || ispunct(chr)) && chr != '-') {
			split_string.push_back(curr);
			curr = "";
		} else {
			curr += chr;
		}
	}
	split_string.push_back(curr); // Add whatever's left.
	return split_string;
}

bool ban(string& msg)
{
	vector<string> words = split(msg, ' ');
	for(string word : words) {
		if(word.length() == 4) {
			auto rgx_res = regex_search(word, regex("\\b[Nn][\\p{L}\\S]{2}[Bb]\\b"));
			if(rgx_res)
				return true;
		}
	}

	return false;
}

int main()
{
	string msg;
	getline(cin, msg);
	if(ban(msg))
		cout << BAN_MSG << endl;
	else {
		cout << ACC_MSG << endl;
	}
}
