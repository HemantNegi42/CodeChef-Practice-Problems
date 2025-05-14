/* Write a program to find the remainder when an integer A is divided by an integer B. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B;
        cin >> A >> B;
        cout << A % B << endl;
    }
    return 0;
}
