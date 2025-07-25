#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        for (char c : s) {
            freq[c]++;
        }

        sort(s.begin(), s.end(), [&](char a, char b) {
            if (freq[a] == freq[b]) return a < b; // optional stable
            return freq[a] > freq[b];
        });

        return s;
    }
};

int main() {
    Solution sol;
    string input;
    
    cout << "Enter a string: ";
    cin >> input;

    string result = sol.frequencySort(input);
    cout << "Sorted by frequency: " << result << endl;

    return 0;
}
