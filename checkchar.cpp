#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch; 
if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        cout << ch << " is an Alphabet." << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a Digit." << endl;
    }
    else {
        cout << ch << " is a Special Character." << endl;
    }
}
