/* You are given the sequence of Nucleotides of one strand of DNA through
a string S of length N. S contains the character A,T,C, and G only.

Chef knows that:
A is complementary to T.
T is complementary to A.
C is complementary to G.
G is complementary to C.
Using the string S, determine the sequence of the complementary strand of the DNA. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string s;
        cin >> s;
        for (int i = 0; i < N; i++) {
            if (s[i] == 'A') s[i] = 'T';
            else if (s[i] == 'T') s[i] = 'A';
            else if (s[i] == 'C') s[i] = 'G';
            else s[i] = 'C';
        }
        cout << s << endl;
    }
    return 0;
}
