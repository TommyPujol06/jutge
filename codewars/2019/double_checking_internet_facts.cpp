#include <iostream>
#include <map>
#include <bits/stdc++.h>

using namespace std;

int main()
 {
   string inp;
   getline(cin, inp);
   transform(inp.begin(), inp.end(), inp.begin(), ::tolower);

   map<char, int, greater<char>> letters;
   for(auto chr : inp) {
     if (isalpha(chr)) {
       letters[chr]++;
     }
   }
   for (int c = 97; c <= 122; c++) {
        char chr = char(c);
        if(letters.find(chr) == letters.end())
          letters[chr] = 0;
   }
   for(const auto &pair : letters) {
     std::cout << pair.first << " = " << pair.second << endl;
   }
 }
