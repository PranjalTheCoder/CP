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
    int n;
    cin >> n;
    vi arr(n);
    inp(arr);
    vi brr=arr;
    sort(all(brr));
    // int maxi = INT_MAX;
    int count = 0;
    fox{
        if(arr[i]!=brr[i]){
             count = arr[i]&brr[i];
            // maxi=min(maxi, count);
            break;
        }
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


