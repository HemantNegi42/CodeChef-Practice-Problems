/* Chef is making a dish that consists of exactly two ingredients. He has four ingredients A,B,C and 
D with tastiness a,b,c, and d respectively. He can use either A or B as the first ingredient and either 
C or D as the second ingredient.The tastiness of a dish is the sum of tastiness of its ingredients. 
Find the maximum possible tastiness of the dish that the chef can prepare. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << max(a, b) + max(c, d) << endl;
    }
    return 0;
}
