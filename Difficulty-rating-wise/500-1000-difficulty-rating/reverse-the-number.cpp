//Given an Integer N, write a program to reverse it.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int rev = 0;
        while (N) {
            rev = rev * 10 + N % 10;
            N = N / 10;
        }
        cout << rev << endl;
    }
    return 0;

}
