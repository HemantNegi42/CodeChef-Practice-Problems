/* In Chefland, there are X schools, and each school has Y students.
The year end results are in and a total of Z students passed the exams.
Assuming that all students appeared for the exams, find whether the number of students
who passed in Chefland was strictly greater than 50%. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        if ((X * Y) < 2 * Z) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
