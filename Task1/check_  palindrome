#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false; 
    
    int original = x, reversed = 0;
    
    while (x > 0) {
        int digit = x % 10;  
        reversed = reversed * 10 + digit; 
        x /= 10; 
    }
    
    return original == reversed; 
}

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    
    if (isPalindrome(x)) {
        cout << x << " is a palindrome." << endl;
    } else {
        cout << x << " is not a palindrome." << endl;
    }

    return 0;
}
