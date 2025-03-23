/* There are 4 companies in the markets of Chefland, A, B, C, and D.
This year,
Company A made a profit of P lakh rupees,
Company B made a profit of Q lakh rupees,
Company C made a profit of R lakh rupees,
Company D made a profit of S lakh rupees.
There is said to be a monopoly in the market if the profit made by one company is strictly greater than 
the sum of profits made by all other companies.Determine if there is a monopoly in the market or not. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        vector < int > v(4);
        for (int i = 0; i < 4; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if (v[0] + v[1] + v[2] < v[3]) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
