#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    while(n%2==0){
        n/=2;
    }
    if(n==1)
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
