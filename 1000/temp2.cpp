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
    int n;
    cin >> n;
    vector<vector<int>> arr(n,vector<int>(n));
    fox{
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    int count = 0;
    for(int i=0; i<n; i++){
        int mini = INT_MAX;
        bool f1 = false;
        for(int j=0, k=i; j<n && k<n; j++,k++){
            if(arr[k][j]<0){
                mini = min(mini, arr[k][j]);
                f1 = true;
            }
        }
        if(f1)
            count += abs(mini);
    }
    for(int i=1; i<n; i++){
        int mini = INT_MAX;
        bool f1 = false;
        for(int j=i, k=0; j<n && k<n; j++,k++){
            if(arr[k][j]<0){
                mini = min(mini, arr[k][j]);
                f1 = true;
            }
        }
        if(f1)
        count += abs(mini);
    }
    cout << count << endl;
}

int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}