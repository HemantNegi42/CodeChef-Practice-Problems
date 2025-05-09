/* Chef is watching a football match. The current score is A:B, that is, team 
1 has scored A goals and team 2 has scored B goals. Chef wonders if it is possible for the score to become 
C:D at a later point in the game (i.e. team 1 has scored C goals and team 2 has scored 
D goals). Can you help Chef by answering his question? */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        (A <= C && B <= D) ? cout << "POSSIBLE": cout << "IMPOSSIBLE";
        cout << endl;
    }
    return 0;
}
