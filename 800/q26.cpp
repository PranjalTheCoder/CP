#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    if(n==1){
        cout << "NO" << endl;
    }
    int count = 1;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int gcd = __gcd(arr[i], arr[j]);
            if(gcd <= 2){
                count = 0;
                break;
            }
        }
    }
    if(count == 0){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}