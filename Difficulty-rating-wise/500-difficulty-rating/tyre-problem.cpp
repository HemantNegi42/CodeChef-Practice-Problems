/* There are N bikes and M cars on the road.
Each bike has 2 tyres.
Each car has 4 tyres.
Find the total number of tyres on the road. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        cout << N * 2 + M * 4 << endl;
    }
    return 0;
}
