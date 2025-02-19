#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i=1; i<=n;i++){
        cin >> a[i];      
    }
    int ans = -1;
    int count = -1;
    for(int i=1; i<=n; i++){
        if(a[i] != 0){
            if(ans == -1 && count == -1){
             ans = i;
             count = i;
            }
            else
                count = i;
        }
    }
    if(ans == -1 && count == -1)
        cout << 0 << endl;
    else{
        for(int i=ans; i<=count; i++){
            if(a[i]==0){
                cout << 2 << endl;
                return;
            }
        }
        cout << 1 << endl;
    }
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
