/* You are given N integers. Find the count of numbers divisible by K. */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a % k == 0)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
