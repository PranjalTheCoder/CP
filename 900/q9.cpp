#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n+1);
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    int count = 0;
    for(int i=1; i<=n; i++){
        count = __gcd(abs(arr[i]-i), count);
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
