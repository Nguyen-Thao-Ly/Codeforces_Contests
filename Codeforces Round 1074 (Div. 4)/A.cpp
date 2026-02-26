// https://codeforces.com/contest/2185/problem/A

#include <bits/stdc++.h>
using namespace std;
long long a[60];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long T;
    cin >> T;

    for (long long i = 0; i < T; ++i)
    {
        long long n;
        cin >> n;

        for (int i = 1; i <= n; ++i)
        {
            cout << i << " ";
        }
        cout << endl;
      
    }

    return 0;
}
