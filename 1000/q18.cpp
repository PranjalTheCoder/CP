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
    int w, h;
    cin >> w >> h;
    vector<pair<int, int>> arr(4);
    int k1;
    cin >> k1;
    // cout << k1;
    // nxt;
    vector<int> x1(k1);
    for(int i=0; i<k1; i++){
        cin >> x1[i];
        // cout << x1[i] << " ";
    }
    // nxt;
    arr[0].first = x1[0];
    arr[0].second = x1[k1-1];
    int k2;
    cin >> k2;
    vector<int> x2(k2);
    for(int i=0; i<k2; i++){
        cin >> x2[i];
    }
    arr[1].first = x2[0];
    arr[1].second = x2[k2-1];
    int k3;
    cin >> k3;
    vector<int> y1(k3);
    for(int i=0; i<k3; i++){
        cin >> y1[i];
    }
    arr[2].first = y1[0];
    arr[2].second = y1[k3-1];
    int k4;
    cin >> k4;
    vector<int> y2(k4);
    for(int i=0; i<k4; i++){
        cin >> y2[i];
    }
    arr[3].first = y2[0];
    arr[3].second = y2[k4-1];
    // for(int i=0; i<4; i++){
    //     cout << "(" << arr[i].first << "," << arr[i].second << ")";
    //     nxt;
    // }
    vector<ll> b(4);
    for(int i=0; i<4; i++){
        b[i] = (ll)(arr[i].second - arr[i].first);
        // cout << b[i] << "->";
    }
    // nxt;
    ll maxi = 0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i!=j){
                ll hi;
               if(i==0){
                   if(j==1){
                       hi = h;
                   }
                   else{
                       hi = arr[j].second;
                   }
               }
               if(i==1){
                   if(j==0){
                       hi = h;
                   }
                   else{
                       hi = arr[j].first;
                   }
               }
               if(i==2){
                   if(j==3){
                       hi=w;
                   }
                   else{
                       hi=arr[j].second;
                   }
               }
               if(i==3){
                   if(j==2){
                       hi=w;
                   }
                   else{
                       hi=arr[j].first;
                   }
               }
                ll area = (b[i]*hi);
                maxi = max(maxi, area);
            }
        }
    }
    cout << maxi << endl;
}



int main() {
    Pranjal;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}