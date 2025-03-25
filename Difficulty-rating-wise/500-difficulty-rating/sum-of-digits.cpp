//You're given an integer N. Write a program to calculate the sum of all the digits of N.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int sum = 0;
        while (N) {
            sum += N % 10;
            N = N / 10;
        }
        cout << sum << endl;
    }
    return 0;
}
