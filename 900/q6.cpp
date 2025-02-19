#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    ll count = 0;
    ll i = 1;
    while(1){
        if(n%i != 0){
            count = i-1;
            break;
        }
        i++;
    }
    cout << count << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
