// https://codeforces.com/problemset/problem/1610/B

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

bool check(vector<int> v){
    int n = v.size();
    for(int i=0; i<n/2; i++){
        if(v[i]!=v[n-i-1])
            return false;
    }
    return true;
}
void solve(){
    int n;
    cin >> n;
    vi arr(n);
    inp(arr);
    if(n==1 || n==2 || check(arr)){yes;return;}
    int x=-1, y=-1;
    for(int i=0; i<n/2; i++){
        if(arr[i]!=arr[n-i-1]){
            x=arr[i];
            y=arr[n-i-1];
            break;
        }
    }
    vi a,b;
    for(auto it: arr){
        if(it!=x)
            a.pb(it);
        if(it!=y)
            b.pb(it);
    }
    if(check(a) || check(b)){yes;return;};
    no;
}
 
int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
        // cout << endl;
    }
}


