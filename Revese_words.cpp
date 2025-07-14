#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != ' ') {
            word += s[i];
        } else if (!word.empty()) {
            words.push_back(word);
            word = "";
        }
    }
    // Add last word if not empty
    if (!word.empty()) words.push_back(word);

    // Reverse the vector of words
    reverse(words.begin(), words.end());

    // Join words with single space
    string result = "";
    for (int i = 0; i < words.size(); ++i) {
        result += words[i];
        if (i != words.size() - 1)
            result += " ";
    }

    return result;
}

int main() {
    string s = "  hello   world  ";
    cout << "\"" << reverseWords(s) << "\"" << endl;
    return 0;
}

