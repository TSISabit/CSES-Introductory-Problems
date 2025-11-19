#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve() {
    int n; cin >> n; 
    int total = n * (n + 1) / 2; 
    int sum = 0; 
    for(int i = 1; i < n; i++){
        int x; 
        cin >> x; 
        sum += x; 
    }

    cout << total - sum << nn; 
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