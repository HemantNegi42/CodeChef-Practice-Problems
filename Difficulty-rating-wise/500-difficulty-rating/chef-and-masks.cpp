/* Chef is shopping for masks. In the shop, he encounters 2 types of masks:
Disposable Masks — cost X but last only 1 day.
Cloth Masks — cost Y but last 10 days.
Chef wants to buy masks to last him 100 days. 
He will buy the masks which cost him the least. In case there is a tie in terms of cost,
Chef will be eco-friendly and choose the cloth masks. Which type of mask will Chef choose? */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        10 * X < Y ? cout << "Disposable" : cout << "Cloth";
        cout << endl;
    }
    return 0;
}
