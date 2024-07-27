#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;


int main() {
    string s;
    while(1) {
        cout << "Enter the string: ";
        cin >> s;
        if(s.length() > 10) {
            cout << "Please enter a string with size less than 10!\n";
        }
        else {
            break;
        }
    }
    int length_of_str = s.length();
    int pow_n = s.length() - 1;
    int extract_num = 0;
    for(int i = 0; i < length_of_str; i++) {
        int int_sum = (s[i] - '0') * pow(10, pow_n);
        extract_num += int_sum;
        pow_n -= 1;
    }
    cout << "The number in string in type int is: " << extract_num << endl; 
}