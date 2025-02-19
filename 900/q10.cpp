#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n+1);
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    vector<ll> b(n+1);
    for(int i=1; i<=n; i++){
        b[i] = b[i-1] + a[i];
    }
    // ll sum = 0;
    // for(auto it: a){
    //     sum += it;
    // }
    // int odd=0;
    // for(int i=0; i<n; i++){
    //     if(arr[i]%2)
    //         odd++;
    // }
    
    while(q--){
        ll l, r, k;
        cin >> l >> r >> k;
        ll x = b[l-1] + b[n] - b[r] + k*(l-r+1);
        // int m = r-l+1;
        // ll x = sum;
        // if(m%2 && k%2){
        //     if(m%2==0)
        //         x+=0;
        //     else    x+=(m*k);
        // }
        if(x%2!=0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }


    // while(q--){
    //     int l, r, k;
    //     cin >> l >> r >> k;
    //     vector<int> arr = a;
    //     for(int i=l; i<=r; i++){
    //         arr[i-1] = k;
    //     }
    //     int sum = 0;
    //     for(int i=0; i<n; i++){
    //         sum += arr[i];
    //     }
    //     if(sum%2)
    //         cout << "YES" << endl;
    //     else
    //         cout << "NO" << endl;
    // }

}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
