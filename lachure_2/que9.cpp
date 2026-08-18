#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class StringPalindrome {
private:
    string str;
public:
    StringPalindrome(string s) : str(s) {}

    bool isPalindrome() {
        string rev = str;
        reverse(rev.begin(), rev.end());
        return str == rev;
    }
};

int main() {
    StringPalindrome sp("madam");
    if (sp.isPalindrome())
        cout << "String is a Palindrome." << endl;
    else
        cout << "String is not a Palindrome." << endl;
    return 0;
}