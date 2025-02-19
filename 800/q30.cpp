#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    int count = 1;
    while(n>10){
        n/=10;
        count++;
    }
    int res = 9*(count-1)+n;
    cout << res << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}