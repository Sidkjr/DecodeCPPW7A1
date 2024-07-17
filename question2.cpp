#include <iostream>
#include <string>
using namespace std;
int main() {
    int count = 0;
    int n;
    string str;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "\nEnter a string which is " << n << " characters long: " << endl;
    cin >> str;
    for(int i = 0; i < n; i++) {
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {
            count += 1;
        }
    }
    cout << "There are " << count << " no of consonants in the entered string." << endl;
}