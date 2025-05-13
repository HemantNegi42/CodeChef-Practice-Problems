#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        if (N <= 10) cout << "Lower Double";
        else if (N <= 15) cout << "Lower Single";
        else if (N <= 25) cout << "Upper Double";
        else cout << "Upper Single";
        cout << endl;
    }
    return 0;
}
