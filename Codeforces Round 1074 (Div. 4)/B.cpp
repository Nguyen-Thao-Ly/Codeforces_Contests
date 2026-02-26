#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long T;
    cin >> T;

    for (long long i = 0; i < T;++i)
    {
        long long n;
        cin >> n;

        long long MAX = 0;
        for (int i = 1; i <= n; ++i)
        {
            long long k;
            cin >> k;
            MAX = max(MAX,k);
        }
        cout << MAX*n << endl;

    }

    return 0;
}
