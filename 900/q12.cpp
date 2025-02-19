#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i=1; i<=n;i++){
        cin >> a[i];      
    }
    int ans = 0;
    for(int i=1; i<n; i++){
        ans = max(ans, a[i]-a[i+1]);
    }
    ans = max(ans, a[n]-a[1]);
    for(int i=2; i<=n; i++){
        ans = max(ans, a[i]-a[1]);
    }
    for(int i=1; i<n; i++){
        ans = max(ans, a[n] - a[i]);
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
