#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string str;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "\nEnter a string which is " << n << " characters long: " << endl;
    cin >> str;
    if(n >= 2) {
        for(int i = 0; i <= n; i++) {
            if(i%2 != 0) {
                str[i] = '#';
            }
        }
        cout << str << endl;
    }
    else {
        cout << str << endl;;
    }
}