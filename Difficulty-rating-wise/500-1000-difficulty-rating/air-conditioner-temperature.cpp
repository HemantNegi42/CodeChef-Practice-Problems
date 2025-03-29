/* There are three people sitting in a room - Alice, Bob, and Charlie. 
They need to decide on the temperature to set on the air conditioner. Everyone has a demand each:
Alice wants the temperature to be at least A degrees.
Bob wants the temperature to be at most B degrees.
Charlie wants the temperature to be at least C degrees.
Can they all agree on some temperature, or not? */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (b >= a && b >= c) cout << "Yes";
        else cout << "No";
        cout << endl;

    }
    return 0;
}
