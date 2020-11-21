#include <iostream>
#include <vector>

using namespace std;

int round_up(int n, int k) // Find nearest multiple of k
{
    if(k == 0) return n;
    int j = n%k;
    if(j == 0) return n;
    return n+k - j;
}

int main()
{
    int attendees;
    cin >> attendees;
    attendees = round_up(attendees, 5);

    vector<int> ing_base = {1, 3, 250, 125, 250, 125, 1};
    int ing_batch = 5;
    int ratio = attendees / ing_batch;

    cout << "- " << ing_base[0] * ratio << " natural yogurt." << endl
         << "- " << ing_base[1] * ratio << " eggs." << endl
         << "- " << ing_base[2] * ratio << "gr flour." << endl
         << "- " << ing_base[3] * ratio << "gr cocoa powder." << endl
         << "- " << ing_base[4] * ratio << "gr sugar." << endl
         << "- " << ing_base[5] * ratio << "gr olive oil." << endl
         << "- " << ing_base[6] * ratio << " packet of yeast." << endl;
}
