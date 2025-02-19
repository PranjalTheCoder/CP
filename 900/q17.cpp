#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    } 
    int maxi = 0;
    for(auto it: mp){
        maxi = max(maxi, it.second);
    }
    int ans = 0;
    while(maxi < n){
        ans++;
        if(n-maxi >= maxi){
            ans += maxi;
            maxi *= 2;
        }
        else{
            ans += n-maxi;
            maxi = n;
        }
    }
    cout << ans << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
