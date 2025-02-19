#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,a,b;
    cin >> n >> a >> b;
    if(a+b>=n-1 && a+b!=2*n)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}