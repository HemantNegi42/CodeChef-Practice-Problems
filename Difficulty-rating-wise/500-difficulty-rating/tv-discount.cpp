/* Chef is looking to buy a TV and has shortlisted two models. The first one costs 
A rupees, while the second one costs B rupees.

Since there is a huge sale coming up on Chefzon, Chef can get a flat discount of 
C rupees on the first TV, and a flat discount of D rupees on the second one.

Help Chef determine which of the two TVs would be cheaper to buy during the sale. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        if ((A - C) < (B - D)) cout << "First";
        else if ((A - C) > (B - D)) cout << "Second";
        else cout << "Any";
        cout << endl;
    }

}
