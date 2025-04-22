#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, A, B;
        cin >> X >> A >> B;
        if (A + 2 * B < X) cout << "NotQualify";
        else cout << "Qualify";
        cout << endl;
    }
    return 0;
}
