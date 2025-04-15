/* On every CodeChef user's profile page, the list of problems that they have set,
tested, and written editorials for, is listed at the bottom.
Given the number of problems in each of these 3 categories as 
X,Y, and Z respectively (where all three integers are distinct), find if the user 
has been most active as a Setter, Tester, or Editorialist. */


#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        if (X >= Y && X >= Z) cout << "Setter";
        else if (X <= Y && Y >= Z) cout << "Tester";
        else cout << "Editorialist";
        cout << endl;
    }
    return 0;
}
