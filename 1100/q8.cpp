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
using namespace std;

void solve(){
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    vpi arr(n);
    fox{cin>>arr[i].first;cin>>arr[i].second;};
    ll sx=arr[a-1].first, sy=arr[a-1].second;
    ll dx=arr[b-1].first, dy=arr[b-1].second;
    ll smini = LLONG_MAX/2;
    for(int i=0; i<k; i++){
        ll count = abs(arr[i].first-sx)+abs(arr[i].second-sy);
        smini = min(smini, count);
    }
    ll dmini = LLONG_MAX/2;
    for(int i=0; i<k; i++){
        ll count = abs(arr[i].first-dx)+abs(arr[i].second-dy);
        dmini = min(dmini, count);
    }
    ll tdist = smini+dmini;
    ll dist = abs(sx-dx)+abs(sy-dy);
    tdist = min(tdist, dist);
    cout << tdist << endl;
 }
 
int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
