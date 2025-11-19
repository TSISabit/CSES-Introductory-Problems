#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    string s; 
    cin >> s; 
    int a = 0, t = 0, c = 0, g = 0;  
    int n = s.size(); 

    int mx = 1, cur = 1; 
    for(int i = 1; i < n; i++){
        if(s[i] == s[i - 1]) cur++; 
        else cur = 1; 
        mx = max(mx, cur); 
    }

    cout << mx << nn; 
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //int t; cin >> t;
    //while (t--) {
        solve();
    //}
    return 0;
}