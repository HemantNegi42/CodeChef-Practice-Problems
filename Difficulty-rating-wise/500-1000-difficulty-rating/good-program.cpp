/* In computing, the collection of four bits is called a nibble.
Chef defines a program as:
Good, if it takes exactly X nibbles of memory, where X is a positive integer.
Not Good, otherwise.
Given a program which takes N bits of memory, determine whether it is Good or Not Good. */


#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        N % 4 == 0 ? cout << "Good" : cout << "Not Good";
        cout << endl;
    }
    return 0;
}
