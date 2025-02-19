#include <bits/stdc++.h>
#define Pranjal ios::sync_with_stdio(0); cin.tie(0);
#define vi vector<int>
#define vii vector<vector<int>>
#define vl vector<long long>
#define vll vector<vector<long long>>
#define vpi vector<pair<int, int>>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nxt cout << endl;
#define inp(arr) for(int i=0; i<n; i++){cin >> arr[i];}
#define all(arr) arr.begin(), arr.end()
#define fox for(int i=0; i<n; i++)
#define pb push_back
#define ll long long 
using namespace std;
 
void solve() {
    ll x, y, k;
    cin >> x >> y >> k;
    ll count = k*y + k - 1;
    ll ans = count / (x-1);
    if(count % (x-1) != 0)
        ans++;
    ans += k;
    cout << ans << endl;
}

int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}