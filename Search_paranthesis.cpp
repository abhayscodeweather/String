#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int balance = 0;

        for(int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                if (balance > 0) {
                    result += s[i];
                }
                balance++;
            } else { // s[i] == ')'
                balance--;
                if (balance > 0) {
                    result += s[i];
                }
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    string s = "(()())(())(()(()))";
    cout << sol.removeOuterParentheses(s) << endl; // Output: "()()()()(())"
    return 0;
}
