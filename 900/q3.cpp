#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, k, x;
    cin >> n >> k >> x;
    // ll lw =0, hw=0;
    // for(ll i=1; i<=k; i++){
    //     lw+=i;
    // }
    // for(ll i=n-k+1; i<=n; i++){
    //     hw+=i;
    // }
    
    ll lw = (k*(k+1)/2);
    ll mdw = ((n-k)*(n-k+1)/2);
    ll hw = ((n*(n+1)/2)-mdw);

    if(x>=lw && x<=hw){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
