#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    string check = s;
    reverse(s.begin(), s.end());
    
    if (s == check) {
        cout << "It is a Palindrome!\n";
    }

    else {
        cout << "It is not a Palindrome!\n";
    }
}   