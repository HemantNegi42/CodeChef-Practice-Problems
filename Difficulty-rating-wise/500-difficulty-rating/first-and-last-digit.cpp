/* Given an integer N . Write a program to obtain the sum of the first and last digits of this number. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int a = n % 10;
        int b = 0;
        while (n) {
            b = n % 10;
            n = n / 10;
        }
        cout << a + b << endl;
    }
}
