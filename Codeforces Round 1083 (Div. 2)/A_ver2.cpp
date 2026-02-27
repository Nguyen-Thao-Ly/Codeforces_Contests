// https://codeforces.com/contest/2205/problem/A

#include <bits/stdc++.h>
using namespace std;

void sol(){
    long long a[505];

    long long n;
    cin >> n;

    long long vtri = 0;
    for (long long i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] == n) {vtri = i;}

    }

    swap(a[vtri], a[0]);

    for (long long i = 0; i < n; ++i) {cout << a[i] << " ";}
    cout << "\n";

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;

    for (long long i = 0; i < t; ++i)
    {
        sol();
    }


    return 0;
}

