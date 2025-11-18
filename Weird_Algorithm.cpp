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
    vector<int>ans; 
    ans.push_back(n); 
    while(n > 1){
        if(n % 2 == 0) n /= 2; 
        else n = (n * 3) + 1; 
        ans.push_back(n); 
    }
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " "; 
    cout << nn; 
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