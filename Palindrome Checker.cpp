#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string str) {
    string temp = str;
    reverse(temp.begin(), temp.end());
    return str == temp;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    if(isPalindrome(input))
        cout << "It's a palindrome.\n";
    else
        cout << "It's not a palindrome.\n";
    return 0;
}