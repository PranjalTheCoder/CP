#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a, b, n;
    cin >> a >> b >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    ll count = b;
    // count += (b-1);
    for(int i=0; i<n; i++){
        count += min(1LL+arr[i], a*1LL)-1;
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
