#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if(b > d){
        cout << -1 << endl;
        return;
    }
    int diff =  d-b;
    a += diff;
    if(c > a){
        cout << -1 << endl;
        return;
    }   
    int dif = a-c;
    cout << diff + dif << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}