#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
   ll k;
   cin >> k;
   if(n%2==1 && k%2==0){
    cout << "NO" << endl;
   }
   else{
    cout << "YES" << endl;
   }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}