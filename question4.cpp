#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string s;
    while(1) {
        cout << "Enter the string value: ";
        cin >> s;
        if(s.length() % 2 != 0) {
            cout << "Please a string of even length!\n";
        }
        else {
            break;
        } 
    }
    int n = s.length() / 2;
    reverse(s.begin()+n, s.end());
    cout << "The half reversed even string is: " << s << endl;
}