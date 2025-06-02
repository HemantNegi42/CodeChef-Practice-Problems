/* Chef considers the climate HOT if the temperature is above 
20, otherwise he considers it COLD. You are given the temperature 
C, find whether the climate is HOT or COLD. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int C;
        cin >> C;
        C > 20 ? cout << "HOT" : cout << "COLD";
        cout << endl;
    }
    return 0;
}
