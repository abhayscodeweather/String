#include <iostream>
#include <string>
using namespace std;

int maxDepth(string s) {
    int max_depth = 0;
    int current_depth = 0;

    for (char c : s) {
        if (c == '(') {
            current_depth++;
            max_depth = max(max_depth, current_depth);
        } else if (c == ')') {
            current_depth--;
        }
    }

    return max_depth;
}

int main() {
    string s = "(1+(2*3)+((8)/4))+1";
    cout << "Maximum Depth: " << maxDepth(s) << endl;
    return 0;
}
