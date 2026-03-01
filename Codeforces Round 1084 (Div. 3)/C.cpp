// https://codeforces.com/contest/2200/problem/C
#include <bits/stdc++.h>
using namespace std;

void sol(){

    long long n;
    cin >> n;

    string s;
    cin >> s;

    string st;
    //char k;
    //for (long long i = 0; i < n; ++i)
    for (char k : s)
    {
        if(!st.empty() && st.back() == k)
        {
            st.pop_back();
        }
        else {st.push_back(k);}
    }

    if (st.empty()) {cout << "YES";}
    else {cout << "NO";}
    cout << "\n";

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;

    while (t--) {sol();}

    return 0;
}
