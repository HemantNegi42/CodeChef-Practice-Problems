/* Chef has three water bottles. At any point, if at least two of them are empty, 
she will fill them up. But if at most one bottle is empty, she will wait, and not fill them up now.
You are given three integers - B1 , B2, and B3.
If B1 = 1, it means that the first bottle is full. If B1=0, it means that the first bottle is empty.
Similarly, B2 denotes whether the second bottle is full or empty, and B3 denotes it for the third bottle.
Output "Water filling time", if Chef has to fill the bottles now. If not, output "Not now". */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int count = 0;
        for (int i = 0; i < 3; i++) {
            int b;
            cin >> b;
            if (b == 1) count++;
        }
        if (count < 2) cout << "Water filling time";
        else cout << "Not now";
        cout << endl;
    }
    return 0;
}
