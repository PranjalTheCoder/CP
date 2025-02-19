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
    fox{
        cin >> arr[i];
    }
    // unordered_map<int, int> mp;
    // for(auto it: arr){
    //     mp[it]++;
    // }
    // // bool f1 = false;
    // for(auto it: mp){
    //     if(it.second == 1){
    //         cout << -1 << endl;
    //         return;
    //     }
    // }
    // int idx = INT_MAX;
    // for(int i=0; i<n-1; i++){
    //     if(arr[i]==arr[i+1]){
    //         idx = min(idx, i);
    //     }else{
    //         int x = idx+1;
    //         for(int j=idx+1; j<=i; j++){
    //             arr[j] = x;
    //             x++;
    //         }
    //         arr[idx] = x;
    //         idx = INT_MAX;
    //     }
    // }
    // if(arr[n-1]==arr[n-2]){
    //     int x = idx+1;
    //     for(int j=idx+1; j<=n-1; j++){
    //         arr[j] = x;
    //         x++;
    //     }
    //     arr[idx] = x;
    // }
    // cout << "idx->" << idx << endl; 
    vi brr(n);
    fox{
        brr[i] = i+1;
    }
    int i = 0;
    while(i<n){
        int curr=arr[i];
        int s = i;
        int e = i;
        while(e<n && arr[e]==curr){
            e++;
        }
        if(s==e-1){
           cout << -1 << endl;
           return; 
        }
        rotate(brr.begin()+s, brr.begin()+s+1, brr.begin()+e);
        i=e;
    }
    fox{
        cout << brr[i] << " ";
    }
    nxt;
}
 
int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}