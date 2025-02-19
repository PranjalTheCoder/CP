#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for(long long i=0; i<n; i++){
        cin >> arr[i];
    }
   long long mini = LONG_LONG_MAX;
   for(int i=0; i<n; i++){
    mini = min(mini, abs(arr[i]));
   }
    cout << mini << endl;
}

int main(){
    // int t;
    // cin >> t;
    // while(t--){
        solve();
    // }
}