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
   ll ans = 0;
   if(n==1){
    cout << 0 << endl;
   }
   while(true){
        bool f1 = true;
        for(int i=0; i<n-1; i++){
            if(arr[i] >= arr[i+1] && arr[i] != 0){
                arr[i] = arr[i]/2;
                ans++;
                f1=false;
                break;
            }
        }
        if(f1)
            break;
   }
    if(n>=2){
        if(arr[0]==0 && arr[1]==0){
            cout << -1 << endl;
        }
        else{
            cout << ans << endl;
        }
    }

}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
