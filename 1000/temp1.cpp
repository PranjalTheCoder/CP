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
#define opt(arr) for(int i=0; i<n; i++){cout << arr[i] << " ";}
#define all(arr) arr.begin(), arr.end()
#define fox for(int i=0; i<n; i++)
#define pb push_back
#define ll long long 
using namespace std;
 
void solve() {
    ll n;
    cin >> n;
    ll i=1;
    ll j=0;
    bool f1 = true;
    // ll m = n;
    while(true){
        if(f1)
            j -= i;
        else
            j += i;
        if(abs(j)>n){
            if(f1)
                cout << "Sakurako" << endl;
            else
                cout << "Kosuke" << endl;
            return;
        }
        if(f1)
            f1 = false;
        else 
            f1 = true;
        i += 2;
    }
}

int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}