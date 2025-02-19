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
    int n,m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    ll count = 0;
    ll sum =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
            if(arr[i][j]<0)
                count++;
            arr[i][j] = abs(arr[i][j]);
            sum += abs(arr[i][j]);
        }
    }
    // cout << sum << endl;
    if(count%2==1){
        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            int x = *min_element(arr[i].begin(), arr[i].end());
            mini = min(mini, x);
        }
        // cout << mini << endl;
        sum -= mini;
        sum -= mini;
    }
    cout << sum << endl;
}



int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}