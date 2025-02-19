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
    int n;
    cin >> n;
    vi arr(n);
    inp(arr);
    sort(all(arr));
    for(int i=1; i<n; i++){
        if(arr[i-1] == arr[i]){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}



int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}