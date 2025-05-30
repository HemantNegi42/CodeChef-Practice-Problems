/* A new TV streaming service was recently started in Chefland called the Chef-TV.
A group of N friends in Chefland want to buy Chef-TV subscriptions. We know that 
6 people can share one Chef-TV subscription. Also, the cost of one Chef-TV subscription is 
X rupees. Determine the minimum total cost that the group of N friends 
will incur so that everyone in the group is able to use Chef-TV. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;
        int ans = N / 6;
        if (N % 6 != 0) ans++;
        cout << ans * X << endl;
    }
    return 0;
}
