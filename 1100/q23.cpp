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

void solve(){
    int n, l, r;
    cin >> n >> l >> r;
    vi arr;
    for(int i=1; i<=n; i++){
        int x=r%i;
        if(r-x<l){
            no;
            return;
        }
        arr.pb(r-x);
    }
    yes;
    debug(arr);
}
    
 
int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}


