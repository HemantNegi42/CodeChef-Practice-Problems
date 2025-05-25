/* Chef started watching a movie that runs for a total of X minutes.

Chef has decided to watch the first Y minutes of the movie at twice the usual
speed as he was warned by his friends that the movie gets interesting only after the first 
Y minutes.
How long will Chef spend watching the movie in total?
Note: It is guaranteed that Y is even. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    cout << X - Y / 2 << endl;
    return 0;
}
