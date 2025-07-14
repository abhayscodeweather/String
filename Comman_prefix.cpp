#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        if (s.empty()) return "";

        for (int i = 0; i < s[0].size(); ++i) {
            char ch = s[0][i];
            for (int j = 1; j < s.size(); ++j) {
                if (i >= s[j].size() || s[j][i] != ch) {
                    return s[0].substr(0, i);
                }
            }
        }

        return s[0];
    }
};

int main() {
    Solution sol;
    vector<string> input = {"flower", "flow", "flight"};

    string result = sol.longestCommonPrefix(input);
    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}

