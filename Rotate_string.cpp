#include <iostream>
#include <string>
using namespace std;

bool rotateString(string s, string goal) {
    if (s.length() != goal.length()) return false;

    string stamp = s + s;
    return stamp.find(goal) != string::npos;
}

int main() {
    string s = "abcde";
    string goal = "cdeab";

    if (rotateString(s, goal)) {
        cout << "Yes, it's a rotated version." << endl;
    } else {
        cout << "No, it's not a rotated version." << endl;
    }

    return 0;
}

