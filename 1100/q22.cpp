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
#define inp(brr) for(int i=0; i<n; i++){cin >> brr[i];}
#define opt(arr) for(int i=0; i<n; i++){cout << arr[i] << " ";}
#define all(arr) arr.begin(), arr.end()
#define fox for(int i=0; i<n; i++)
#define pb push_back
#define ll long long 
#define debug(a) for(int i=0; i<(int)a.size(); i++){cout << a[i] << " ";} cout << endl;
using namespace std;
const int mod = 1e9+7;

void solve(){
    ll n;
    cin >> n;
    ll count = n*(n+1)%mod;
    ll cnt = ((4*n-1)*2022/6)%mod;
    ll ct = (count*cnt)%mod;
    cout << ct << endl;
    
}
    
 
int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}


