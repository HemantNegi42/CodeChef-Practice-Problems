/* Kattapa, as you all know was one of the greatest warriors of his time.
The kingdom of Maahishmati had never lost a battle under him (as army-chief),
and the reason for that was their really powerful army, also called as Mahasena.
Kattapa was known to be a very superstitious person. He believed that a soldier is "lucky"
if the soldier is holding an even number of weapons, and "unlucky" otherwise. 
He considered the army as "READY FOR BATTLE" if the count of "lucky" soldiers 
is strictly greater than the count of "unlucky" soldiers, and "NOT READY" otherwise.
Given the number of weapons each soldier is holding, your task is to determine 
whether the army formed by all these soldiers is "READY FOR BATTLE" or "NOT READY". */

#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;
    int even = 0;
    int odd = 0;
    while (N--) {
        int a;
        cin >> a;
        if (a % 2 == 0) even++;
        else odd++;
    }
    if (even > odd) cout << "READY FOR BATTLE";
    else cout << "NOT READY";
    cout << endl;
    return 0;
}
