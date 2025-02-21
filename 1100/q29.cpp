// https://codeforces.com/problemset/problem/1618/C

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
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }
    ll x=arr[0], y=arr[1];
    for(int i=2; i<n; i++){
        if(i%2==0) x=__gcd(x, arr[i]);
        else  y=__gcd(y, arr[i]);
    }
    // cout << x << " " << y << endl;
    bool f1=true;
    for(int i=0; i<n; i+=2){
        if(arr[i]%y==0){
            f1=false;
            break;
        }
    }
    if(f1){
        cout << y << endl;
        return;
    }
    f1=true;
    for(int i=1; i<n; i+=2){
        if(arr[i]%x==0){
            f1=false;
            break;
        }
    }
    if(f1){
        cout << x << endl;
        return;
    }

    cout << 0 << endl;
    // cout << endl;
}
 
int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}


