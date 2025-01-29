/* Janmansh has to submit 3 assignments for Chingari before 
10 pm and he starts to do the assignments at X pm. Each assignment takes him 
1 hour to complete. Can you tell whether he'll be able to complete all assignments on time or not? */
//Constraints 1≤T≤10 1≤X≤9


#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X;
        cin >> X;
        if (10 - X >= 3) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
    return 0;
}
