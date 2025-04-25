/* Election season has started in Chefland and the election commission wants to know the count of eligible voters.
There are N people in Chefland where the age of the i thperson in Ai.
Given that a person needs to be at least 
X years old to vote, find the number of eligible voters.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        int count = 0;
        while (N--) {
            int a;
            cin >> a;
            if (a >= X) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
